/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
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

#include "sipAPIQtGui.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qundostack.sip"
#include <qundostack.h>
#line 39 "sipQtGuiQUndoCommand.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQUndoCommand.cpp"


class sipQUndoCommand : public QUndoCommand
{
public:
    sipQUndoCommand(QUndoCommand *);
    sipQUndoCommand(const QString&,QUndoCommand *);
    virtual ~sipQUndoCommand();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int id() const;
    bool mergeWith(const QUndoCommand *);
    void redo();
    void undo();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQUndoCommand(const sipQUndoCommand &);
    sipQUndoCommand &operator = (const sipQUndoCommand &);

    char sipPyMethods[4];
};

sipQUndoCommand::sipQUndoCommand(QUndoCommand *a0): QUndoCommand(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoCommand::sipQUndoCommand(const QString& a0,QUndoCommand *a1): QUndoCommand(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoCommand::~sipQUndoCommand()
{
    sipCommonDtor(sipPySelf);
}

int sipQUndoCommand::id() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_id);

    if (!meth)
        return QUndoCommand::id();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

bool sipQUndoCommand::mergeWith(const QUndoCommand *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_mergeWith);

    if (!meth)
        return QUndoCommand::mergeWith(a0);

    extern bool sipVH_QtGui_35(sip_gilstate_t,PyObject *,const QUndoCommand *);

    return sipVH_QtGui_35(sipGILState,meth,a0);
}

void sipQUndoCommand::redo()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_redo);

    if (!meth)
    {
        QUndoCommand::redo();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

void sipQUndoCommand::undo()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_undo);

    if (!meth)
    {
        QUndoCommand::undo();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}


extern "C" {static PyObject *meth_QUndoCommand_id(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QUndoCommand::id() : sipCpp->id());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_id, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_mergeWith(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_mergeWith(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUndoCommand * a0;
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QUndoCommand, &sipCpp, sipType_QUndoCommand, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QUndoCommand::mergeWith(a0) : sipCpp->mergeWith(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_mergeWith, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_redo(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_redo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QUndoCommand::redo() : sipCpp->redo());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_redo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_setText(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUndoCommand, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_setText, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_text(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_text, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_undo(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_undo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QUndoCommand::undo() : sipCpp->undo());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_undo, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_childCount(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_childCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->childCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_childCount, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QUndoCommand_child(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoCommand, &sipCpp, &a0))
        {
            const QUndoCommand *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->child(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QUndoCommand *>(sipRes),sipType_QUndoCommand,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_child, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUndoCommand(void *, const sipTypeDef *);}
static void *cast_QUndoCommand(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUndoCommand)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUndoCommand(void *, int);}
static void release_QUndoCommand(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQUndoCommand *>(sipCppV);
    else
        delete reinterpret_cast<QUndoCommand *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QUndoCommand(sipSimpleWrapper *);}
static void dealloc_QUndoCommand(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQUndoCommand *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QUndoCommand(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QUndoCommand(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QUndoCommand(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQUndoCommand *sipCpp = 0;

    {
        QUndoCommand * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QUndoCommand, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQUndoCommand(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QUndoCommand * a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QUndoCommand, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQUndoCommand(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QUndoCommand[] = {
    {SIP_MLNAME_CAST(sipName_child), meth_QUndoCommand_child, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childCount), meth_QUndoCommand_childCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_id), meth_QUndoCommand_id, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mergeWith), meth_QUndoCommand_mergeWith, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_redo), meth_QUndoCommand_redo, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setText), meth_QUndoCommand_setText, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_text), meth_QUndoCommand_text, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_undo), meth_QUndoCommand_undo, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QUndoCommand = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QUndoCommand,
        {0}
    },
    {
        sipNameNr_QUndoCommand,
        {0, 0, 1},
        8, methods_QUndoCommand,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QUndoCommand,
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
    dealloc_QUndoCommand,
    0,
    0,
    0,
    release_QUndoCommand,
    cast_QUndoCommand,
    0,
    0,
    0
},
    0,
    0,
    0
};
