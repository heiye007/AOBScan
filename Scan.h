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

BOOLEAN
NTAPI
TrimBytes(
    __in PCTSTR Sig,
    __out PBYTE * Coll,
    __out PSIZE_T CollSize
);

PVOID
NTAPI
ScanBytes(
    __in PBYTE Begin,
    __in PBYTE End,
    __in PCTSTR Sig
);

#endif // !_SCAN_H_
