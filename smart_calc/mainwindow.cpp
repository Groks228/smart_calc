#include "mainwindow.h"

#include <QMessageBox>

#include "../smart_calc.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  setWindowTitle("SmartCalc");
  setWindowOpacity(0.993);
  button_flag = 1;

  ui->widget->xAxis->setRange(-5, 5);
  ui->widget->yAxis->setRange(-5, 5);
  resize(0, 0);
  //  ui->widget->xAxis->setLabel("x");
  //  ui->widget->yAxis->setLabel("y");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_size_clicked() {
  if (button_flag > 0)
    resize(1200, 1200);
  else
    resize(0, 0);

  button_flag *= -1;
}

void MainWindow::on_pushButton_graph_clicked() {
  std::string text1 = ui->lineEdit->text().toUtf8().constData();
  const char *str = text1.c_str();
  double Y;
  char parse_string[512] = "";

  int error = parser(str, parse_string);
  if (error) {
    ui->lineEdit->setText("error");
  } else {
    list_calc_t *head = {0};
    push_string_to_list(parse_string, &head);
    error += checker(head);
    x.clear();
    y.clear();
    ui->widget->clearGraphs();
    if (error) {
      ui->lineEdit->setText("error");
    } else {
      ui->widget->replot();
      h = 0.005;

      double xmin = ui->lineEdit_xmin->text().toDouble();
      double xmax = ui->lineEdit_xmax->text().toDouble();
      double ymin = ui->lineEdit_ymin->text().toDouble();
      double ymax = ui->lineEdit_ymax->text().toDouble();
      xBegin = xmin;
      xEnd = xmax + h;

      if (xmin > xmax || ymin > ymax) {
        if (xmin > xmax) ui->lineEdit_xmin->setText("error");
        if (ymin > ymax) ui->lineEdit_ymin->setText("error");

      } else if (xmax > 1000000) {
        ui->lineEdit_xmax->setText("error");
      } else if (xmin < -1000000) {
        ui->lineEdit_xmin->setText("error");
      } else if (ymax > 1000000) {
        ui->lineEdit_ymax->setText("error");
      } else if (ymin < -1000000) {
        ui->lineEdit_ymin->setText("error");
      } else {
        ui->widget->xAxis->setRange(xmin, xmax);
        ui->widget->yAxis->setRange(ymin, ymax);

        if (((xmax - xmin) + (ymax - ymin)) >= 100) h *= 4;
        if (((xmax - xmin) + (ymax - ymin)) >= 1000) h *= 2;
        if (((xmax - xmin) + (ymax - ymin)) >= 10000) h *= 5;
        if (((xmax - xmin) + (ymax - ymin)) >= 100000) h *= 5;

        for (X = xBegin; X <= xEnd; X += h) {
          if (!process(str, X, &Y)) {
            x.push_back(X);
            y.push_back(Y);
          }
        }
        ui->widget->addGraph();
        ui->widget->graph(0)->addData(x, y);
        ui->widget->replot();
      }
    }
  }
}

void MainWindow::on_pushButton_clicked() { ui->lineEdit->insert("4"); }

void MainWindow::on_pushButton_8_clicked() { ui->lineEdit->insert("1"); }

void MainWindow::on_pushButton_7_clicked() { ui->lineEdit->insert("2"); }

void MainWindow::on_pushButton_2_clicked() { ui->lineEdit->insert("3"); }

void MainWindow::on_pushButton_9_clicked() { ui->lineEdit->insert("5"); }

void MainWindow::on_pushButton_5_clicked() { ui->lineEdit->insert("6"); }

void MainWindow::on_pushButton_3_clicked() { ui->lineEdit->insert("7"); }

void MainWindow::on_pushButton_6_clicked() { ui->lineEdit->insert("8"); }

void MainWindow::on_pushButton_4_clicked() { ui->lineEdit->insert("9"); }

void MainWindow::on_pushButton_10_clicked() { ui->lineEdit->insert("0"); }

void MainWindow::on_pushButton_15_clicked() {
  std::string text1 = ui->lineEdit->text().toUtf8().constData();
  const char *str = text1.c_str();
  double res = 0;
  double x = 0;
  x = ui->line_X->text().toDouble();
  int error = process(str, x, &res);
  if (error)
    ui->lineEdit->setText("error");
  else {
    int preсision = 0;
    char str_format[10];
    double res_tmp = res - (int)res;
    for (int i = 1; i <= 7; i++) {
      res_tmp *= 10;
      if ((int)res_tmp % 10) preсision = i;
    }
    sprintf((char *)str_format, "%%.%dlf", preсision);
    sprintf((char *)str, str_format, res);
    ui->lineEdit->setText(str);
  }
}

void MainWindow::on_pushButton_14_clicked() { ui->lineEdit->insert("+"); }

void MainWindow::on_pushButton_13_clicked() { ui->lineEdit->insert("-"); }

void MainWindow::on_pushButton_12_clicked() { ui->lineEdit->insert("*"); }

void MainWindow::on_pushButton_div_clicked() { ui->lineEdit->insert("/"); }

void MainWindow::on_pushButton_18_clicked() {
  ui->lineEdit->setText("");
  ui->lineEdit->setPlaceholderText("0");
}

void MainWindow::on_pushButton_16_clicked() { ui->lineEdit->insert("."); }

void MainWindow::on_pushButton_log_clicked() { ui->lineEdit->insert("log("); }

void MainWindow::on_pushButton_ln_clicked() { ui->lineEdit->insert("ln("); }

void MainWindow::on_pushButton_tan_clicked() { ui->lineEdit->insert("tan("); }

void MainWindow::on_pushButton_atan_clicked() { ui->lineEdit->insert("atan("); }

void MainWindow::on_pushButton_acos_clicked() { ui->lineEdit->insert("acos("); }

void MainWindow::on_pushButton_cos_clicked() { ui->lineEdit->insert("cos("); }

void MainWindow::on_pushButton_sin_clicked() { ui->lineEdit->insert("sin("); }

void MainWindow::on_pushButton_asin_clicked() { ui->lineEdit->insert("asin("); }

void MainWindow::on_pushButton_sqrt_clicked() { ui->lineEdit->insert("sqrt("); }

void MainWindow::on_pushButton_mod_clicked() { ui->lineEdit->insert("%"); }

void MainWindow::on_pushButton_bracket_open_clicked() {
  ui->lineEdit->insert("(");
}

void MainWindow::on_pushButton_bracket_close_clicked() {
  ui->lineEdit->insert(")");
}

void MainWindow::on_pushButton_exp_clicked() { ui->lineEdit->insert("^"); }

void MainWindow::on_pushButton_x_clicked() { ui->lineEdit->insert("x"); }
