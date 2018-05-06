#include "includes/MainWindow.hpp"


MainWindow::MainWindow(int width, int height, std::string contents) {
    this->setFixedSize(width, height);

    setWindowTitle(tr("No Title"));

    m_pWebView = new QWebEngineView(this);
    m_pWebView->setContent(contents.c_str());
    this->setCentralWidget(m_pWebView);

}
