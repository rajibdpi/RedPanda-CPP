/*
 * Copyright (C) 2020-2022 Roy Qu (royqh1979@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "HighlighterManager.h"
#include <QFileInfo>
#include <QObject>
#include "qsynedit/highlighter/cpp.h"
#include "qsynedit/highlighter/asm.h"
#include "qsynedit/highlighter/glsl.h"
#include "qsynedit/Constants.h"
#include "colorscheme.h"

HighlighterManager highlighterManager;

HighlighterManager::HighlighterManager()
{

}

QSynedit::PSynHighlighter HighlighterManager::getHighlighter(const QString &filename)
{
    QFileInfo info(filename);
    QString suffix = info.suffix();
    if (suffix.isEmpty() || suffix == "c" || suffix == "cpp" || suffix == "cxx"
            || suffix == "cc" || suffix == "h" || suffix == "hpp"
            || suffix == "hxx" || suffix == "hh" || suffix == "C"
            || suffix == "CPP" || suffix =="H" || suffix == "c++"
            || suffix == "h++") {
        return getCppHighlighter();
    } else if (suffix == "vs" || suffix == "fs" || suffix == "frag") {
        return getGLSLHighlighter();
    }
    return QSynedit::PSynHighlighter();
}

QSynedit::PSynHighlighter HighlighterManager::copyHighlighter(QSynedit::PSynHighlighter highlighter)
{
    if (!highlighter)
        return QSynedit::PSynHighlighter();
    if (highlighter->getName() == SYN_HIGHLIGHTER_CPP)
        return getCppHighlighter();
    else if (highlighter->getName() == SYN_HIGHLIGHTER_ASM)
        return getAsmHighlighter();
    else if (highlighter->getName() == SYN_HIGHLIGHTER_GLSL)
        return getGLSLHighlighter();
    //todo
    return QSynedit::PSynHighlighter();
}

QSynedit::PSynHighlighter HighlighterManager::getCppHighlighter()
{
    QSynedit::SynEditCppHighlighter* highlighter = new QSynedit::SynEditCppHighlighter();
    highlighter->asmAttribute()->setForeground(Qt::blue);
    highlighter->charAttribute()->setForeground(Qt::black);
    highlighter->commentAttribute()->setForeground(0x8C8C8C);
    highlighter->commentAttribute()->setStyles(QSynedit::SynFontStyle::fsItalic);
    highlighter->classAttribute()->setForeground(0x008080);
    highlighter->floatAttribute()->setForeground(Qt::darkMagenta);
    highlighter->functionAttribute()->setForeground(0x00627A);
    highlighter->globalVarAttribute()->setForeground(0x660E7A);
    highlighter->hexAttribute()->setForeground(Qt::darkMagenta);
    highlighter->identifierAttribute()->setForeground(0x080808);
    highlighter->invalidAttribute()->setForeground(Qt::red);
    highlighter->localVarAttribute()->setForeground(Qt::black);
    highlighter->numberAttribute()->setForeground(0x1750EB);
    highlighter->octAttribute()->setForeground(Qt::darkMagenta);
    highlighter->preprocessorAttribute()->setForeground(0x1f542e);
    highlighter->keywordAttribute()->setForeground(0x0033b3);
    highlighter->whitespaceAttribute()->setForeground(Qt::lightGray);
    highlighter->stringAttribute()->setForeground(0x007d17);
    highlighter->stringEscapeSequenceAttribute()->setForeground(Qt::red);
    highlighter->symbolAttribute()->setForeground(0xc10000);
    highlighter->variableAttribute()->setForeground(0x400080);
    QSynedit::PSynHighlighter pHighlighter=std::make_shared<QSynedit::SynEditCppHighlighter>();
    return pHighlighter;
}

QSynedit::PSynHighlighter HighlighterManager::getAsmHighlighter()
{
    QSynedit::SynEditASMHighlighter* highlighter = new QSynedit::SynEditASMHighlighter();
    QSynedit::PSynHighlighter pHighlighter(highlighter);
    highlighter->commentAttribute()->setForeground(0x8C8C8C);
    highlighter->commentAttribute()->setStyles(QSynedit::SynFontStyle::fsItalic);
    highlighter->identifierAttribute()->setForeground(0x080808);
    highlighter->keywordAttribute()->setForeground(0x0033b3);
    highlighter->numberAttribute()->setForeground(0x1750EB);
    highlighter->whitespaceAttribute()->setForeground(Qt::lightGray);
    highlighter->stringAttribute()->setForeground(0x007d17);
    highlighter->symbolAttribute()->setForeground(0xc10000);
    return pHighlighter;
}

QSynedit::PSynHighlighter HighlighterManager::getGLSLHighlighter()
{
    QSynedit::SynEditGLSLHighlighter* highlighter = new QSynedit::SynEditGLSLHighlighter();
    QSynedit::PSynHighlighter pHighlighter(highlighter);
    highlighter->asmAttribute()->setForeground(Qt::blue);
    highlighter->charAttribute()->setForeground(Qt::black);
    highlighter->commentAttribute()->setForeground(0x8C8C8C);
    highlighter->commentAttribute()->setStyles(QSynedit::SynFontStyle::fsItalic);
    highlighter->classAttribute()->setForeground(0x008080);
    highlighter->floatAttribute()->setForeground(Qt::darkMagenta);
    highlighter->functionAttribute()->setForeground(0x00627A);
    highlighter->globalVarAttribute()->setForeground(0x660E7A);
    highlighter->hexAttribute()->setForeground(Qt::darkMagenta);
    highlighter->identifierAttribute()->setForeground(0x080808);
    highlighter->invalidAttribute()->setForeground(Qt::red);
    highlighter->localVarAttribute()->setForeground(Qt::black);
    highlighter->numberAttribute()->setForeground(0x1750EB);
    highlighter->octAttribute()->setForeground(Qt::darkMagenta);
    highlighter->preprocessorAttribute()->setForeground(0x1f542e);
    highlighter->keywordAttribute()->setForeground(0x0033b3);
    highlighter->whitespaceAttribute()->setForeground(Qt::lightGray);
    highlighter->stringAttribute()->setForeground(0x007d17);
    highlighter->stringEscapeSequenceAttribute()->setForeground(Qt::red);
    highlighter->symbolAttribute()->setForeground(0xc10000);
    highlighter->variableAttribute()->setForeground(0x400080);
    return pHighlighter;
}

void HighlighterManager::applyColorScheme(QSynedit::PSynHighlighter highlighter, const QString &schemeName)
{
    if (!highlighter)
        return;
    if ( (highlighter->getName() == SYN_HIGHLIGHTER_CPP)
         || (highlighter->getName() == SYN_HIGHLIGHTER_ASM)
         ) {
        for (QString name: highlighter->attributes().keys()) {
            PColorSchemeItem item = pColorManager->getItem(schemeName,name);
            if (item) {
                QSynedit::PSynHighlighterAttribute attr = highlighter->attributes()[name];
                attr->setBackground(item->background());
                attr->setForeground(item->foreground());
                QSynedit::SynFontStyles styles = QSynedit::SynFontStyle::fsNone;
                styles.setFlag(QSynedit::SynFontStyle::fsBold, item->bold());
                styles.setFlag(QSynedit::SynFontStyle::fsItalic, item->italic());
                styles.setFlag(QSynedit::SynFontStyle::fsUnderline, item->underlined());
                styles.setFlag(QSynedit::SynFontStyle::fsStrikeOut, item->strikeout());
                attr->setStyles(styles);
            }
        }
    }
}
