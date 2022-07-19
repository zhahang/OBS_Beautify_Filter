/********************************************************************************
** Form generated from reading UI file 'captions.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTIONS_H
#define UI_CAPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CaptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *source;
    QCheckBox *enable;
    QLabel *label_2;
    QComboBox *language;
    QComboBox *provider;
    QLabel *label_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *accept;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *CaptionsDialog)
    {
        if (CaptionsDialog->objectName().isEmpty())
            CaptionsDialog->setObjectName(QString::fromUtf8("CaptionsDialog"));
        CaptionsDialog->resize(519, 152);
        verticalLayout = new QVBoxLayout(CaptionsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(CaptionsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        source = new QComboBox(CaptionsDialog);
        source->setObjectName(QString::fromUtf8("source"));
        source->setInsertPolicy(QComboBox::InsertAlphabetically);

        formLayout->setWidget(1, QFormLayout::FieldRole, source);

        enable = new QCheckBox(CaptionsDialog);
        enable->setObjectName(QString::fromUtf8("enable"));

        formLayout->setWidget(0, QFormLayout::FieldRole, enable);

        label_2 = new QLabel(CaptionsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        language = new QComboBox(CaptionsDialog);
        language->setObjectName(QString::fromUtf8("language"));

        formLayout->setWidget(2, QFormLayout::FieldRole, language);

        provider = new QComboBox(CaptionsDialog);
        provider->setObjectName(QString::fromUtf8("provider"));
        provider->setInsertPolicy(QComboBox::InsertAlphabetically);

        formLayout->setWidget(3, QFormLayout::FieldRole, provider);

        label_3 = new QLabel(CaptionsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        accept = new QPushButton(CaptionsDialog);
        accept->setObjectName(QString::fromUtf8("accept"));

        horizontalLayout->addWidget(accept);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

#if QT_CONFIG(shortcut)
        label->setBuddy(source);
        label_2->setBuddy(language);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CaptionsDialog);
        QObject::connect(accept, SIGNAL(clicked()), CaptionsDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(CaptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptionsDialog)
    {
        CaptionsDialog->setWindowTitle(QCoreApplication::translate("CaptionsDialog", "Captions", nullptr));
        label->setText(QCoreApplication::translate("CaptionsDialog", "Captions.AudioSource", nullptr));
        enable->setText(QCoreApplication::translate("CaptionsDialog", "Enable", nullptr));
        label_2->setText(QCoreApplication::translate("CaptionsDialog", "Basic.Settings.General.Language", nullptr));
        label_3->setText(QCoreApplication::translate("CaptionsDialog", "Captions.Provider", nullptr));
        accept->setText(QCoreApplication::translate("CaptionsDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptionsDialog: public Ui_CaptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTIONS_H
