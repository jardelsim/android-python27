/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:18 2012
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

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 39 "sipQtGuiQKeySequence.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQKeySequence.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtGuiQKeySequence.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 49 "sipQtGuiQKeySequence.cpp"


extern "C" {static PyObject *meth_QKeySequence_count(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_count, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isEmpty, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_matches(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_matches(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;
        QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            QKeySequence::SequenceMatch sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->matches(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipConvertFromEnum(sipRes,sipType_QKeySequence_SequenceMatch);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_matches, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_mnemonic(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QKeySequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QKeySequence(QKeySequence::mnemonic(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_mnemonic, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeySequence, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDetached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_isDetached, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_toString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_toString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence::SequenceFormat a0 = QKeySequence::PortableText;
        QKeySequence *sipCpp;

        static const char *sipKwdList[] = {
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QKeySequence, &sipCpp, sipType_QKeySequence_SequenceFormat, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_toString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_fromString(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1 = QKeySequence::PortableText;

        static const char *sipKwdList[] = {
            NULL,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            QKeySequence *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QKeySequence(QKeySequence::fromString(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_fromString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *);}
static PyObject *meth_QKeySequence_keyBindings(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence::StandardKey a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QKeySequence_StandardKey, &a0))
        {
            QList<QKeySequence> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QKeySequence>(QKeySequence::keyBindings(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName_keyBindings, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QKeySequence___ge__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator>=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ge_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___le__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator<=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,le_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___gt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator>(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,gt_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___lt__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator<(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,lt_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___ne__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___eq__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QKeySequence, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QKeySequence::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QKeySequence,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeySequence___getitem__(PyObject *,PyObject *);}
static PyObject *slot_QKeySequence___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            int sipRes = 0;
            int sipIsErr = 0;

#line 229 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qkeysequence.sip"
        SIP_SSIZE_T idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = sipCpp->operator[]((uint)idx);
#line 527 "sipQtGuiQKeySequence.cpp"

            if (sipIsErr)
                return 0;

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeySequence, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_QKeySequence___int__(PyObject *);}
static PyObject *slot_QKeySequence___int__(PyObject *sipSelf)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static SIP_SSIZE_T slot_QKeySequence___len__(PyObject *);}
static SIP_SSIZE_T slot_QKeySequence___len__(PyObject *sipSelf)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeySequence));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 581 "sipQtGuiQKeySequence.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QKeySequence(void *, const sipTypeDef *);}
static void *cast_QKeySequence(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QKeySequence)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QKeySequence(void *, int);}
static void release_QKeySequence(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QKeySequence *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QKeySequence(void *);}
static PyObject *pickle_QKeySequence(void *sipCppV)
{
    QKeySequence *sipCpp = reinterpret_cast<QKeySequence *>(sipCppV);
    PyObject *sipRes;

#line 109 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qkeysequence.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->operator[](0), sipCpp->operator[](1), sipCpp->operator[](2), sipCpp->operator[](3));
#line 620 "sipQtGuiQKeySequence.cpp"

    return sipRes;
}


extern "C" {static void assign_QKeySequence(void *, SIP_SSIZE_T, const void *);}
static void assign_QKeySequence(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QKeySequence *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QKeySequence *>(sipSrc);
}


extern "C" {static void *array_QKeySequence(SIP_SSIZE_T);}
static void *array_QKeySequence(SIP_SSIZE_T sipNrElem)
{
    return new QKeySequence[sipNrElem];
}


extern "C" {static void *copy_QKeySequence(const void *, SIP_SSIZE_T);}
static void *copy_QKeySequence(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QKeySequence(reinterpret_cast<const QKeySequence *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QKeySequence(sipSimpleWrapper *);}
static void dealloc_QKeySequence(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QKeySequence(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QKeySequence(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QKeySequence(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QKeySequence *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QKeySequence();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QKeySequence * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QKeySequence, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QKeySequence(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QKeySequence::SequenceFormat a1;

        static const char *sipKwdList[] = {
            sipName_key,
            sipName_format,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1E", sipType_QString,&a0, &a0State, sipType_QKeySequence_SequenceFormat, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QKeySequence(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1 = 0;
        int a2 = 0;
        int a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_key2,
            sipName_key3,
            sipName_key4,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "i|iii", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QKeySequence(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVariant * a0;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_variant,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_QVariant,&a0, &a0State))
        {
#line 217 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qkeysequence.sip"
        sipCpp = new QKeySequence(qVariantValue<QKeySequence>(*a0));
#line 744 "sipQtGuiQKeySequence.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QKeySequence(PyObject *, void **, int *, PyObject *);}
static int convertTo_QKeySequence(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QKeySequence **sipCppPtr = reinterpret_cast<QKeySequence **>(sipCppPtrV);

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qkeysequence.sip"
// Allow a StandardKey, QString or an integer whenever a QKeySequence is
// expected.

if (sipIsErr == NULL)
{
    if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
        return 1;

#if QT_VERSION >= 0x040200
    if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
        return 1;
#endif

    if (sipCanConvertToType(sipPy, sipType_QString, 0))
        return 1;

    PyErr_Clear();

    SIPLong_AsLong(sipPy);

    return !PyErr_Occurred();
}

if (sipCanConvertToType(sipPy, sipType_QKeySequence, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QKeySequence *>(sipConvertToType(sipPy, sipType_QKeySequence, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

#if QT_VERSION >= 0x040200
if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QKeySequence_StandardKey)))
{
    *sipCppPtr = new QKeySequence((QKeySequence::StandardKey)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}
#endif

if (sipCanConvertToType(sipPy, sipType_QString, 0))
{
    int state;
    QString *qs = reinterpret_cast<QString *>(sipConvertToType(sipPy, sipType_QString, 0, 0, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(qs, sipType_QString, state);
        return 0;
    }

    *sipCppPtr = new QKeySequence(*qs);

    sipReleaseType(qs, sipType_QString, state);

    return sipGetState(sipTransferObj);
}

int key = SIPLong_AsLong(sipPy);

*sipCppPtr = new QKeySequence(key);

return sipGetState(sipTransferObj);
#line 823 "sipQtGuiQKeySequence.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QKeySequence[] = {
    {(void *)slot_QKeySequence___ge__, ge_slot},
    {(void *)slot_QKeySequence___le__, le_slot},
    {(void *)slot_QKeySequence___gt__, gt_slot},
    {(void *)slot_QKeySequence___lt__, lt_slot},
    {(void *)slot_QKeySequence___ne__, ne_slot},
    {(void *)slot_QKeySequence___eq__, eq_slot},
    {(void *)slot_QKeySequence___getitem__, getitem_slot},
    {(void *)slot_QKeySequence___int__, int_slot},
    {(void *)slot_QKeySequence___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QKeySequence[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QKeySequence_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fromString), (PyCFunction)meth_QKeySequence_fromString, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QKeySequence_isDetached, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QKeySequence_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_keyBindings), meth_QKeySequence_keyBindings, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_matches), meth_QKeySequence_matches, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mnemonic), meth_QKeySequence_mnemonic, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toString), (PyCFunction)meth_QKeySequence_toString, METH_VARARGS|METH_KEYWORDS, NULL}
};

static sipEnumMemberDef enummembers_QKeySequence[] = {
    {sipName_AddTab, QKeySequence::AddTab, 265},
    {sipName_Back, QKeySequence::Back, 265},
    {sipName_Bold, QKeySequence::Bold, 265},
    {sipName_Close, QKeySequence::Close, 265},
    {sipName_Copy, QKeySequence::Copy, 265},
    {sipName_Cut, QKeySequence::Cut, 265},
    {sipName_Delete, QKeySequence::Delete, 265},
    {sipName_DeleteEndOfLine, QKeySequence::DeleteEndOfLine, 265},
    {sipName_DeleteEndOfWord, QKeySequence::DeleteEndOfWord, 265},
    {sipName_DeleteStartOfWord, QKeySequence::DeleteStartOfWord, 265},
    {sipName_ExactMatch, QKeySequence::ExactMatch, 264},
    {sipName_Find, QKeySequence::Find, 265},
    {sipName_FindNext, QKeySequence::FindNext, 265},
    {sipName_FindPrevious, QKeySequence::FindPrevious, 265},
    {sipName_Forward, QKeySequence::Forward, 265},
    {sipName_HelpContents, QKeySequence::HelpContents, 265},
    {sipName_InsertLineSeparator, QKeySequence::InsertLineSeparator, 265},
    {sipName_InsertParagraphSeparator, QKeySequence::InsertParagraphSeparator, 265},
    {sipName_Italic, QKeySequence::Italic, 265},
    {sipName_MoveToEndOfBlock, QKeySequence::MoveToEndOfBlock, 265},
    {sipName_MoveToEndOfDocument, QKeySequence::MoveToEndOfDocument, 265},
    {sipName_MoveToEndOfLine, QKeySequence::MoveToEndOfLine, 265},
    {sipName_MoveToNextChar, QKeySequence::MoveToNextChar, 265},
    {sipName_MoveToNextLine, QKeySequence::MoveToNextLine, 265},
    {sipName_MoveToNextPage, QKeySequence::MoveToNextPage, 265},
    {sipName_MoveToNextWord, QKeySequence::MoveToNextWord, 265},
    {sipName_MoveToPreviousChar, QKeySequence::MoveToPreviousChar, 265},
    {sipName_MoveToPreviousLine, QKeySequence::MoveToPreviousLine, 265},
    {sipName_MoveToPreviousPage, QKeySequence::MoveToPreviousPage, 265},
    {sipName_MoveToPreviousWord, QKeySequence::MoveToPreviousWord, 265},
    {sipName_MoveToStartOfBlock, QKeySequence::MoveToStartOfBlock, 265},
    {sipName_MoveToStartOfDocument, QKeySequence::MoveToStartOfDocument, 265},
    {sipName_MoveToStartOfLine, QKeySequence::MoveToStartOfLine, 265},
    {sipName_NativeText, QKeySequence::NativeText, 263},
    {sipName_New, QKeySequence::New, 265},
    {sipName_NextChild, QKeySequence::NextChild, 265},
    {sipName_NoMatch, QKeySequence::NoMatch, 264},
    {sipName_Open, QKeySequence::Open, 265},
    {sipName_PartialMatch, QKeySequence::PartialMatch, 264},
    {sipName_Paste, QKeySequence::Paste, 265},
    {sipName_PortableText, QKeySequence::PortableText, 263},
    {sipName_Preferences, QKeySequence::Preferences, 265},
    {sipName_PreviousChild, QKeySequence::PreviousChild, 265},
    {sipName_Print, QKeySequence::Print, 265},
    {sipName_Quit, QKeySequence::Quit, 265},
    {sipName_Redo, QKeySequence::Redo, 265},
    {sipName_Refresh, QKeySequence::Refresh, 265},
    {sipName_Replace, QKeySequence::Replace, 265},
    {sipName_Save, QKeySequence::Save, 265},
    {sipName_SaveAs, QKeySequence::SaveAs, 265},
    {sipName_SelectAll, QKeySequence::SelectAll, 265},
    {sipName_SelectEndOfBlock, QKeySequence::SelectEndOfBlock, 265},
    {sipName_SelectEndOfDocument, QKeySequence::SelectEndOfDocument, 265},
    {sipName_SelectEndOfLine, QKeySequence::SelectEndOfLine, 265},
    {sipName_SelectNextChar, QKeySequence::SelectNextChar, 265},
    {sipName_SelectNextLine, QKeySequence::SelectNextLine, 265},
    {sipName_SelectNextPage, QKeySequence::SelectNextPage, 265},
    {sipName_SelectNextWord, QKeySequence::SelectNextWord, 265},
    {sipName_SelectPreviousChar, QKeySequence::SelectPreviousChar, 265},
    {sipName_SelectPreviousLine, QKeySequence::SelectPreviousLine, 265},
    {sipName_SelectPreviousPage, QKeySequence::SelectPreviousPage, 265},
    {sipName_SelectPreviousWord, QKeySequence::SelectPreviousWord, 265},
    {sipName_SelectStartOfBlock, QKeySequence::SelectStartOfBlock, 265},
    {sipName_SelectStartOfDocument, QKeySequence::SelectStartOfDocument, 265},
    {sipName_SelectStartOfLine, QKeySequence::SelectStartOfLine, 265},
    {sipName_Underline, QKeySequence::Underline, 265},
    {sipName_Undo, QKeySequence::Undo, 265},
    {sipName_UnknownKey, QKeySequence::UnknownKey, 265},
    {sipName_WhatsThis, QKeySequence::WhatsThis, 265},
    {sipName_ZoomIn, QKeySequence::ZoomIn, 265},
    {sipName_ZoomOut, QKeySequence::ZoomOut, 265},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QKeySequence = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QKeySequence,
        {0}
    },
    {
        sipNameNr_QKeySequence,
        {0, 0, 1},
        8, methods_QKeySequence,
        71, enummembers_QKeySequence,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QKeySequence,
    init_QKeySequence,
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
    dealloc_QKeySequence,
    assign_QKeySequence,
    array_QKeySequence,
    copy_QKeySequence,
    release_QKeySequence,
    cast_QKeySequence,
    convertTo_QKeySequence,
    0,
    pickle_QKeySequence
},
    0,
    0,
    0
};
