#include "includes/HCV.hpp"


HCV::HCV(int width, int height, std::string title, std::string contents) {
    this->setFixedSize(width, height);

    setWindowTitle(tr(title.c_str()));

    m_pWebView = new QWebEngineView(this);
    m_pWebView->setHtml(contents.c_str());
    this->setCentralWidget(m_pWebView);
}
