/*
   FreeRDP: A Remote Desktop Protocol client.
   RemoteFX Codec Library - API Header

   Copyright 2011 Vic Lee

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef __RFX_H
#define __RFX_H

typedef struct _RFX_CONTEXT RFX_CONTEXT;

RFX_CONTEXT *
rfx_context_new(void);
void
rfx_context_free(RFX_CONTEXT * context);

#endif

