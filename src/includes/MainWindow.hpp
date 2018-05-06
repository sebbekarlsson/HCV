#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <string>
#include <iostream>
#include <QWebEngineView>
#include <QtWidgets>
#include <QMainWindow>
//#include <QTextEdit>
//#include <QListWidget>
//#include "BorderLayout.h"


class MainWindow : public QMainWindow {
    Q_OBJECT

    public:
        MainWindow(int width, int height, std::string contents);

        //private slots:
        //    void newFile();
        //    void openProject();

    private:
        QWebEngineView* m_pWebView;
        //BorderLayout *layout;
};
#endif
