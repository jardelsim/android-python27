/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXmlPatterns.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlserializer.sip"
#include <qxmlserializer.h>
#line 39 "sipQtXmlPatternsQXmlSerializer.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlquery.sip"
#include <qxmlquery.h>
#line 43 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 46 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 86 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 51 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 54 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 57 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 60 "sipQtXmlPatternsQXmlSerializer.cpp"
#line 632 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "sipQtXmlPatternsQXmlSerializer.cpp"


class sipQXmlSerializer : public QXmlSerializer
{
public:
    sipQXmlSerializer(const QXmlQuery&,QIODevice *);
    virtual ~sipQXmlSerializer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void namespaceBinding(const QXmlName&);
    void characters(const QStringRef&);
    void comment(const QString&);
    void startElement(const QXmlName&);
    void endElement();
    void attribute(const QXmlName&,const QStringRef&);
    void processingInstruction(const QXmlName&,const QString&);
    void atomicValue(const QVariant&);
    void startDocument();
    void endDocument();
    void startOfSequence();
    void endOfSequence();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlSerializer(const sipQXmlSerializer &);
    sipQXmlSerializer &operator = (const sipQXmlSerializer &);

    char sipPyMethods[12];
};

sipQXmlSerializer::sipQXmlSerializer(const QXmlQuery& a0,QIODevice *a1): QXmlSerializer(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlSerializer::~sipQXmlSerializer()
{
    sipCommonDtor(sipPySelf);
}

void sipQXmlSerializer::namespaceBinding(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_namespaceBinding);

    if (!meth)
    {
        QXmlSerializer::namespaceBinding(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t,PyObject *,const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState,meth,a0);
}

void sipQXmlSerializer::characters(const QStringRef& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_characters);

    if (!meth)
    {
        QXmlSerializer::characters(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_3(sip_gilstate_t,PyObject *,const QStringRef&);

    sipVH_QtXmlPatterns_3(sipGILState,meth,a0);
}

void sipQXmlSerializer::comment(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_comment);

    if (!meth)
    {
        QXmlSerializer::comment(a0);
        return;
    }

    typedef void (*sipVH_QtCore_33)(sip_gilstate_t,PyObject *,const QString&);

    ((sipVH_QtCore_33)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[33]))(sipGILState,meth,a0);
}

void sipQXmlSerializer::startElement(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_startElement);

    if (!meth)
    {
        QXmlSerializer::startElement(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t,PyObject *,const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState,meth,a0);
}

void sipQXmlSerializer::endElement()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_endElement);

    if (!meth)
    {
        QXmlSerializer::endElement();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQXmlSerializer::attribute(const QXmlName& a0,const QStringRef& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_attribute);

    if (!meth)
    {
        QXmlSerializer::attribute(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_1(sip_gilstate_t,PyObject *,const QXmlName&,const QStringRef&);

    sipVH_QtXmlPatterns_1(sipGILState,meth,a0,a1);
}

void sipQXmlSerializer::processingInstruction(const QXmlName& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_processingInstruction);

    if (!meth)
    {
        QXmlSerializer::processingInstruction(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_0(sip_gilstate_t,PyObject *,const QXmlName&,const QString&);

    sipVH_QtXmlPatterns_0(sipGILState,meth,a0,a1);
}

void sipQXmlSerializer::atomicValue(const QVariant& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_atomicValue);

    if (!meth)
    {
        QXmlSerializer::atomicValue(a0);
        return;
    }

    typedef void (*sipVH_QtCore_2)(sip_gilstate_t,PyObject *,const QVariant&);

    ((sipVH_QtCore_2)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[2]))(sipGILState,meth,a0);
}

void sipQXmlSerializer::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_startDocument);

    if (!meth)
    {
        QXmlSerializer::startDocument();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQXmlSerializer::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_endDocument);

    if (!meth)
    {
        QXmlSerializer::endDocument();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQXmlSerializer::startOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_startOfSequence);

    if (!meth)
    {
        QXmlSerializer::startOfSequence();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQXmlSerializer::endOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_endOfSequence);

    if (!meth)
    {
        QXmlSerializer::endOfSequence();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState,meth);
}


extern "C" {static PyObject *meth_QXmlSerializer_namespaceBinding(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_namespaceBinding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::namespaceBinding(*a0) : sipCpp->namespaceBinding(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_namespaceBinding, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_characters(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QStringRef * a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QStringRef,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::characters(*a0) : sipCpp->characters(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_characters, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_comment(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::comment(*a0) : sipCpp->comment(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_comment, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_startElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startElement(*a0) : sipCpp->startElement(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startElement, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_endElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endElement() : sipCpp->endElement());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endElement, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_attribute(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        const QStringRef * a1;
        int a1State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0, sipType_QStringRef,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::attribute(*a0,*a1) : sipCpp->attribute(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringRef *>(a1),sipType_QStringRef,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_attribute, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        const QString * a1;
        int a1State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::processingInstruction(*a0,*a1) : sipCpp->processingInstruction(*a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_processingInstruction, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_atomicValue(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_atomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QVariant * a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::atomicValue(*a0) : sipCpp->atomicValue(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_atomicValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startDocument() : sipCpp->startDocument());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startDocument, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endDocument() : sipCpp->endDocument());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endDocument, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_startOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startOfSequence() : sipCpp->startOfSequence());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startOfSequence, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_endOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endOfSequence() : sipCpp->endOfSequence());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endOfSequence, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_outputDevice(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_outputDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            QIODevice *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->outputDevice();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_outputDevice, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextCodec * a0;
        PyObject *a0Keep;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSerializer, &sipCpp, &a0Keep, sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCodec(a0);
            Py_END_ALLOW_THREADS

            sipKeepReference(sipSelf, -11, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_setCodec, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QXmlSerializer_codec(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            const QTextCodec *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->codec();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QTextCodec *>(sipRes),sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_codec, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlSerializer(void *, const sipTypeDef *);}
static void *cast_QXmlSerializer(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QXmlSerializer)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractXmlReceiver)->ctd_cast((QAbstractXmlReceiver *)(QXmlSerializer *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSerializer(void *, int);}
static void release_QXmlSerializer(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlSerializer *>(sipCppV);
    else
        delete reinterpret_cast<QXmlSerializer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlSerializer(sipSimpleWrapper *);}
static void dealloc_QXmlSerializer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlSerializer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlSerializer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QXmlSerializer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlSerializer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlSerializer *sipCpp = 0;

    {
        const QXmlQuery * a0;
        QIODevice * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J8", sipType_QXmlQuery, &a0, sipType_QIODevice, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlSerializer(*a0,a1);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QXmlSerializer[] = {{4, 255, 1}};


static PyMethodDef methods_QXmlSerializer[] = {
    {SIP_MLNAME_CAST(sipName_atomicValue), meth_QXmlSerializer_atomicValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_attribute), meth_QXmlSerializer_attribute, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_characters), meth_QXmlSerializer_characters, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_codec), meth_QXmlSerializer_codec, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_comment), meth_QXmlSerializer_comment, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QXmlSerializer_endDocument, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QXmlSerializer_endElement, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_endOfSequence), meth_QXmlSerializer_endOfSequence, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namespaceBinding), meth_QXmlSerializer_namespaceBinding, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_outputDevice), meth_QXmlSerializer_outputDevice, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QXmlSerializer_processingInstruction, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QXmlSerializer_setCodec, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QXmlSerializer_startDocument, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QXmlSerializer_startElement, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_startOfSequence), meth_QXmlSerializer_startOfSequence, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlSerializer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlSerializer,
        {0}
    },
    {
        sipNameNr_QXmlSerializer,
        {0, 0, 1},
        15, methods_QXmlSerializer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QXmlSerializer,
    0,
    init_QXmlSerializer,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QXmlSerializer,
    0,
    0,
    0,
    release_QXmlSerializer,
    cast_QXmlSerializer,
    0,
    0,
    0
},
    0,
    0,
    0
};
