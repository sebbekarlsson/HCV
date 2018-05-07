#ifndef HCV_H
#define HCV_H
#include <string>
#include <iostream>
#include <QWebEngineView>
#include <QtWidgets>
#include <QMainWindow>


class HCV : public QMainWindow {
    Q_OBJECT

    public:
        HCV(int width, int height, std::string title, std::string contents);

    private:
        QWebEngineView* m_pWebView;
};
#endif
