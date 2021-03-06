/*
 *Copyright (c) 2021 Ecole Polytechnique de Montreal
 * All rights reserved.
 *
 *This source code is licensed under the BSD-style license found in the
 *LICENSE file in the root directory of this source tree. 
 */

#include <stdint.h>
#include <otf2/otf2.h>

OTF2_CallbackCode GlobalDef_SystemTreeNode_callback(void *userData,
                    OTF2_SystemTreeNodeRef self,
                    OTF2_StringRef name,
                    OTF2_StringRef className,
                    OTF2_SystemTreeNodeRef systemTreeParent);

OTF2_CallbackCode GlobalDef_LocationGroup_callback(void *userData,
                    OTF2_LocationGroupRef self,
                    OTF2_StringRef name,
                    OTF2_LocationGroupType locationGroupType,
                    OTF2_SystemTreeNodeRef systemTreeParent);

OTF2_CallbackCode GlobalDef_Location_callback(void *userData,
                    OTF2_LocationRef self,
                    OTF2_StringRef name,
                    OTF2_LocationType locationType,
                    uint64_t numberOfEvents,
                    OTF2_LocationGroupRef locationGroup);

OTF2_CallbackCode GlobalDef_String_callback(void *userData,
                    OTF2_StringRef self,
                    const char* string);

OTF2_CallbackCode GlobalDef_Region_callback(void *userData,
                    OTF2_RegionRef self, 
                    OTF2_StringRef name, 
                    OTF2_StringRef canonicalName,
                    OTF2_StringRef description,
                    OTF2_RegionRole regionRole,
                    OTF2_Paradigm paradigm,
                    OTF2_RegionFlag regionFlags,
                    OTF2_StringRef sourceFile,
                    uint32_t beginLineNumber,
                    uint32_t endLineNumber);

OTF2_CallbackCode GlobalDef_Group_callback(void *userData,
                    OTF2_GroupRef self,
                    OTF2_StringRef name,
                    OTF2_GroupType groupType,
                    OTF2_Paradigm paradigm,
                    OTF2_GroupFlag groupFlags,
                    uint32_t numberOfMembers,
                    const uint64_t *members);

OTF2_CallbackCode GlobalDef_Comm_callback(void *userData,
                    OTF2_CommRef self,
                    OTF2_StringRef name,
                    OTF2_GroupRef group,
                    OTF2_CommRef parent);

void set_global_def_callbacks(OTF2_GlobalDefReaderCallbacks *global_def_callbacks);