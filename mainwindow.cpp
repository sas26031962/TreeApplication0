#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Создание виджета дерева
    QTreeWidget *treeWidget = new QTreeWidget(this);
    treeWidget->setHeaderLabels({"Компоненты", "Описание"}); // Заголовки колонок

    // Добавление корневых элементов
    rootItem = new QTreeWidgetItem(treeWidget);
    rootItem->setText(0, "Автомобиль"); // Колонка 0
    rootItem->setText(1, "Транспортное средство");

    // Добавление дочерних элементов
    child1 = new QTreeWidgetItem(rootItem);
    child1->setText(0, "Двигатель");
    child1->setText(1, "V8, 400 л.с.");

    child2 = new QTreeWidgetItem(rootItem);
    child2->setText(0, "Колеса");
    child2->setText(1, "18 дюймов");

    // Развернуть корневой элемент для отображения дочерних
    rootItem->setExpanded(true);

    // Обработка клика по элементу
    QObject::connect(treeWidget, &QTreeWidget::itemClicked, [](QTreeWidgetItem *item, int column) {
        qDebug() << "Кликнули на:" << item->text(column);
    });

    // Отобразить в центре
    setCentralWidget(treeWidget);

}

MainWindow::~MainWindow()
{
    delete ui;
}
