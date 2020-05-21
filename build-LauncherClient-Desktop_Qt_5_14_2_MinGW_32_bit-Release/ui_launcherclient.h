/********************************************************************************
** Form generated from reading UI file 'launcherclient.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAUNCHERCLIENT_H
#define UI_LAUNCHERCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LauncherClient
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLineEdit *lineIP;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *intPort;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *linePseudo;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnConnect;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *listMessages;
    QLineEdit *lineMessage;
    QPushButton *btnSend;

    void setupUi(QDialog *LauncherClient)
    {
        if (LauncherClient->objectName().isEmpty())
            LauncherClient->setObjectName(QString::fromUtf8("LauncherClient"));
        LauncherClient->resize(759, 468);
        horizontalLayoutWidget = new QWidget(LauncherClient);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 741, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lineIP = new QLineEdit(horizontalLayoutWidget);
        lineIP->setObjectName(QString::fromUtf8("lineIP"));

        horizontalLayout->addWidget(lineIP);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        intPort = new QLineEdit(horizontalLayoutWidget);
        intPort->setObjectName(QString::fromUtf8("intPort"));

        horizontalLayout->addWidget(intPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        linePseudo = new QLineEdit(horizontalLayoutWidget);
        linePseudo->setObjectName(QString::fromUtf8("linePseudo"));

        horizontalLayout->addWidget(linePseudo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        btnConnect = new QPushButton(horizontalLayoutWidget);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        horizontalLayout->addWidget(btnConnect);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        listMessages = new QPlainTextEdit(LauncherClient);
        listMessages->setObjectName(QString::fromUtf8("listMessages"));
        listMessages->setGeometry(QRect(10, 100, 741, 331));
        lineMessage = new QLineEdit(LauncherClient);
        lineMessage->setObjectName(QString::fromUtf8("lineMessage"));
        lineMessage->setGeometry(QRect(10, 440, 621, 21));
        btnSend = new QPushButton(LauncherClient);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(639, 438, 113, 25));

        retranslateUi(LauncherClient);

        QMetaObject::connectSlotsByName(LauncherClient);
    } // setupUi

    void retranslateUi(QDialog *LauncherClient)
    {
        LauncherClient->setWindowTitle(QCoreApplication::translate("LauncherClient", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("LauncherClient", "Addresse IP :", nullptr));
        label_2->setText(QCoreApplication::translate("LauncherClient", "Port :", nullptr));
        label->setText(QCoreApplication::translate("LauncherClient", "Pseudo :", nullptr));
        btnConnect->setText(QCoreApplication::translate("LauncherClient", "Se connecter", nullptr));
        btnSend->setText(QCoreApplication::translate("LauncherClient", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LauncherClient: public Ui_LauncherClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAUNCHERCLIENT_H
