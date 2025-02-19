/********************************************************************************
** Form generated from reading UI file 'choosethemedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETHEMEDIALOG_H
#define UI_CHOOSETHEMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseThemeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpTheme;
    QGridLayout *gridLayout;
    QLabel *lblLight;
    QLabel *lblDark;
    QRadioButton *rbDark;
    QRadioButton *rbLight;
    QRadioButton *rbAuto;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *rbC;
    QRadioButton *rbCpp;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QButtonGroup *grpDefaultLanguage;

    void setupUi(QDialog *ChooseThemeDialog)
    {
        if (ChooseThemeDialog->objectName().isEmpty())
            ChooseThemeDialog->setObjectName("ChooseThemeDialog");
        ChooseThemeDialog->resize(1041, 629);
        verticalLayout = new QVBoxLayout(ChooseThemeDialog);
        verticalLayout->setObjectName("verticalLayout");
        grpTheme = new QGroupBox(ChooseThemeDialog);
        grpTheme->setObjectName("grpTheme");
        gridLayout = new QGridLayout(grpTheme);
        gridLayout->setObjectName("gridLayout");
        lblLight = new QLabel(grpTheme);
        lblLight->setObjectName("lblLight");
        lblLight->setFrameShape(QFrame::Box);
        lblLight->setFrameShadow(QFrame::Sunken);
        lblLight->setPixmap(QPixmap(QString::fromUtf8(":/demos/light.png")));

        gridLayout->addWidget(lblLight, 2, 1, 1, 1);

        lblDark = new QLabel(grpTheme);
        lblDark->setObjectName("lblDark");
        lblDark->setFrameShape(QFrame::Box);
        lblDark->setFrameShadow(QFrame::Sunken);
        lblDark->setPixmap(QPixmap(QString::fromUtf8(":/demos/dark.png")));

        gridLayout->addWidget(lblDark, 2, 0, 1, 1);

        rbDark = new QRadioButton(grpTheme);
        rbDark->setObjectName("rbDark");

        gridLayout->addWidget(rbDark, 1, 0, 1, 1);

        rbLight = new QRadioButton(grpTheme);
        rbLight->setObjectName("rbLight");

        gridLayout->addWidget(rbLight, 1, 1, 1, 1);

        rbAuto = new QRadioButton(grpTheme);
        rbAuto->setObjectName("rbAuto");

        gridLayout->addWidget(rbAuto, 0, 0, 1, 1);


        verticalLayout->addWidget(grpTheme);

        widget_2 = new QWidget(ChooseThemeDialog);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        rbC = new QRadioButton(widget_2);
        grpDefaultLanguage = new QButtonGroup(ChooseThemeDialog);
        grpDefaultLanguage->setObjectName("grpDefaultLanguage");
        grpDefaultLanguage->addButton(rbC);
        rbC->setObjectName("rbC");

        horizontalLayout_2->addWidget(rbC);

        rbCpp = new QRadioButton(widget_2);
        grpDefaultLanguage->addButton(rbCpp);
        rbCpp->setObjectName("rbCpp");

        horizontalLayout_2->addWidget(rbCpp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 77, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(ChooseThemeDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(1828, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(widget);
        btnOk->setObjectName("btnOk");

        horizontalLayout->addWidget(btnOk);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(rbAuto, rbDark);
        QWidget::setTabOrder(rbDark, rbLight);
        QWidget::setTabOrder(rbLight, rbC);
        QWidget::setTabOrder(rbC, rbCpp);
        QWidget::setTabOrder(rbCpp, btnOk);

        retranslateUi(ChooseThemeDialog);

        QMetaObject::connectSlotsByName(ChooseThemeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseThemeDialog)
    {
        ChooseThemeDialog->setWindowTitle(QCoreApplication::translate("ChooseThemeDialog", "Choose Theme", nullptr));
        grpTheme->setTitle(QCoreApplication::translate("ChooseThemeDialog", "Choose Theme", nullptr));
        lblLight->setText(QString());
        lblDark->setText(QString());
        rbDark->setText(QCoreApplication::translate("ChooseThemeDialog", "Dark Theme", nullptr));
        rbLight->setText(QCoreApplication::translate("ChooseThemeDialog", "Light Theme", nullptr));
        rbAuto->setText(QCoreApplication::translate("ChooseThemeDialog", "System Theme", nullptr));
        label_3->setText(QCoreApplication::translate("ChooseThemeDialog", "Default Language:", nullptr));
        rbC->setText(QCoreApplication::translate("ChooseThemeDialog", "C", nullptr));
        rbCpp->setText(QCoreApplication::translate("ChooseThemeDialog", "C++", nullptr));
        btnOk->setText(QCoreApplication::translate("ChooseThemeDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseThemeDialog: public Ui_ChooseThemeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETHEMEDIALOG_H
