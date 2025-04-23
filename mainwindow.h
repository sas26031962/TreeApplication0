#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QTreeWidget * treeWidget;
    QTreeWidgetItem * rootItem;
    QTreeWidgetItem * child1;
    QTreeWidgetItem * child2;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
