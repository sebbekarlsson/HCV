#ifndef HCV_H
#define HCV_H
#include <string>
#include <iostream>
#include <QWebEngineView>
#include <QtWidgets>
#include <QMainWindow>
#include <QUrl>


class HCV : public QMainWindow {
    Q_OBJECT

    public:
        HCV(
            int width,
            int height,
            std::string title,
            std::string contents,
            QUrl* url
        );

    private:
        QWebEngineView* webview;
};
#endif
