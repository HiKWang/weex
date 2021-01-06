/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
/*
 * Implementation of the user-space ashmem API for devices, which have our
 * ashmem-enabled kernel. See ashmem-sim.c for the "fake" tmp-based version,
 * used by the simulator.
 */

#ifndef IPCMESSAGEJS_H
#define IPCMESSAGEJS_H

// Message from Platform to Script in ScriptBridge
enum class IPCJSMsg {
    INITFRAMEWORK,
    EXECJSSERVICE,
    TAKEHEAPSNAPSHOT,
    EXECJS,
	CREATEINSTANCE,
    DESTORYINSTANCE,
    EXECJSONINSTANCE,
    EXECJSWITHRESULT,
    EXECJSWITHCALLBACK,
    UPDATEGLOBALCONFIG,
	UpdateInitFrameworkParams,
    EXECTIMERCALLBACK,
	INITAPPFRAMEWORK,
    CREATEAPPCONTEXT,
    EXECJSONAPPWITHRESULT,
    CALLJSONAPPCONTEXT,
    DESTORYAPPCONTEXT,
    SETLOGLEVEL,
    COMPILEQUICKJSBIN,
};

// Message from Script to Core in ScriptBridge
enum class IPCProxyMsg {
    SETJSFVERSION,
    REPORTEXCEPTION,
    CALLNATIVE,
    CALLNATIVEMODULE,
    CALLNATIVECOMPONENT,
    CALLADDELEMENT,
    SETTIMEOUT,
    NATIVELOG,
    CALLCREATEBODY,
    CALLUPDATEFINISH,
    CALLCREATEFINISH,
    CALLREFRESHFINISH,
    CALLUPDATEATTRS,
    CALLUPDATESTYLE,
    CALLREMOVEELEMENT,
    CALLMOVEELEMENT,
    CALLADDEVENT,
    CALLREMOVEEVENT,
    CALLGCANVASLINK,
	CALLT3DLINK,
    SETINTERVAL,
    CLEARINTERVAL,
	POSTMESSAGE,
  	DISPATCHMESSAGE,
    DISPATCHMESSAGESYNC,
  	ONRECEIVEDRESULT,
    UPDATECOMPONENTDATA,
    HEARTBEAT,
    POSTLOGDETAIL,
    COMPILEQUICKJSBINCALLBACK,
};
// Message from Script to Core in ScriptBridge

#endif /* IPCMESSAGEJS_H */
