#include <QtGui/QtGui>
#include <QApplication>
#include <QWidget>
#include <QWebEngineView>
#include <QHBoxLayout>
#include <QPlainTextEdit>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
   // w.setFixedSize(100,100);
   // w.setMinimumSize(600,400);
    auto hBox = new QHBoxLayout(&w);
    auto webView = new QWebEngineView;
    auto plainText = new QPlainTextEdit;

    hBox->addWidget(plainText,1);
    hBox->addWidget(webView,1);
    plainText->setPlainText("<H1>Hello! Type here!</H1>");
    webView->setHtml("<H1>Hello! Type here!</H1>");



    QObject::connect(plainText,&QPlainTextEdit::textChanged,[&plainText, &webView](){
       webView->setHtml(plainText->toPlainText());
    });


    w.show();


    return a.exec();
}
