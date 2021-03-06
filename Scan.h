/*
*
* Copyright (c) 2015-2017 by blindtiger ( blindtiger@foxmail.com )
*
* The contents of this file are subject to the Mozilla Public License Version
* 2.0 (the "License"); you may not use this file except in compliance with
* the License. You may obtain a copy of the License at
* http://www.mozilla.org/MPL/
*
* Software distributed under the License is distributed on an "AS IS" basis,
* WITHOUT WARRANTY OF ANY KIND, either express or implied. SEe the License
* for the specific language governing rights and limitations under the
* License.
*
* The Initial Developer of the Original e is blindtiger.
*
*/

#ifndef _SCAN_H_
#define _SCAN_H_

#ifdef __cplusplus
/* Assume C declarations for C++ */
extern "C" {
#endif	/* __cplusplus */

    BOOLEAN
        NTAPI
        CmpByte(
            __in CHAR b1,
            __in CHAR b2
        );

    BOOLEAN
        NTAPI
        CmpShort(
            __in SHORT s1,
            __in SHORT s2
        );

    BOOLEAN
        NTAPI
        CmpLong(
            __in LONG l1,
            __in LONG l2
        );

    BOOLEAN
        NTAPI
        CmpLongLong(
            __in LONGLONG ll1,
            __in LONGLONG ll2
        );

    PVOID
        NTAPI
        ScanBytes(
            __in PSTR Begin,
            __in PSTR End,
            __in PSTR Sig
        );

#ifdef __cplusplus
}
#endif	/* __cplusplus */

#endif // !_SCAN_H_
