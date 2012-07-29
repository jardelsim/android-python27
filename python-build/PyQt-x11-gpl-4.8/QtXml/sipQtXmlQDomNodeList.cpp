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

#include "sipAPIQtXml.h"

#line 173 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 39 "sipQtXmlQDomNodeList.cpp"

#line 67 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXml/qdom.sip"
#include <qdom.h>
#line 43 "sipQtXmlQDomNodeList.cpp"


extern "C" {static PyObject *meth_QDomNodeList_item(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_item(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDomNodeList, &sipCpp, &a0))
        {
            QDomNode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNode(sipCpp->item(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_item, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomNodeList_length(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNodeList, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_length, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomNodeList_count(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNodeList, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomNodeList_at(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_at(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDomNodeList, &sipCpp, &a0))
        {
            QDomNode *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDomNode(sipCpp->at(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDomNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_at, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomNodeList_size(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNodeList, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_size, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QDomNodeList_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QDomNodeList_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDomNodeList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomNodeList, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomNodeList, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QDomNodeList___len__(PyObject *);}
static SIP_SSIZE_T slot_QDomNodeList___len__(PyObject *sipSelf)
{
    QDomNodeList *sipCpp = reinterpret_cast<QDomNodeList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomNodeList));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 225 "sipQtXmlQDomNodeList.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QDomNodeList___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDomNodeList___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDomNodeList *sipCpp = reinterpret_cast<QDomNodeList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomNodeList));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDomNodeList * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomNodeList, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QDomNodeList::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml,ne_slot,sipType_QDomNodeList,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDomNodeList___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDomNodeList___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDomNodeList *sipCpp = reinterpret_cast<QDomNodeList *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDomNodeList));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDomNodeList * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QDomNodeList, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QDomNodeList::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXml,eq_slot,sipType_QDomNodeList,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDomNodeList(void *, const sipTypeDef *);}
static void *cast_QDomNodeList(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDomNodeList)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomNodeList(void *, int);}
static void release_QDomNodeList(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDomNodeList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDomNodeList(void *, SIP_SSIZE_T, const void *);}
static void assign_QDomNodeList(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDomNodeList *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDomNodeList *>(sipSrc);
}


extern "C" {static void *array_QDomNodeList(SIP_SSIZE_T);}
static void *array_QDomNodeList(SIP_SSIZE_T sipNrElem)
{
    return new QDomNodeList[sipNrElem];
}


extern "C" {static void *copy_QDomNodeList(const void *, SIP_SSIZE_T);}
static void *copy_QDomNodeList(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDomNodeList(reinterpret_cast<const QDomNodeList *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomNodeList(sipSimpleWrapper *);}
static void dealloc_QDomNodeList(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDomNodeList(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QDomNodeList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDomNodeList(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDomNodeList *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomNodeList();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDomNodeList * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomNodeList, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDomNodeList(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDomNodeList[] = {
    {(void *)slot_QDomNodeList___len__, len_slot},
    {(void *)slot_QDomNodeList___ne__, ne_slot},
    {(void *)slot_QDomNodeList___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDomNodeList[] = {
    {SIP_MLNAME_CAST(sipName_at), meth_QDomNodeList_at, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QDomNodeList_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QDomNodeList_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_item), meth_QDomNodeList_item, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_length), meth_QDomNodeList_length, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QDomNodeList_size, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXml_QDomNodeList = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDomNodeList,
        {0}
    },
    {
        sipNameNr_QDomNodeList,
        {0, 0, 1},
        6, methods_QDomNodeList,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDomNodeList,
    init_QDomNodeList,
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
    dealloc_QDomNodeList,
    assign_QDomNodeList,
    array_QDomNodeList,
    copy_QDomNodeList,
    release_QDomNodeList,
    cast_QDomNodeList,
    0,
    0,
    0
},
    0,
    0,
    0
};
