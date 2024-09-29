#ifndef NULLSOFT_HOTMIXRADIO_MAIN_H
#define NULLSOFT_HOTMIXRADIO_MAIN_H

#include <arch.h>
#include "../Plugins/General/gen_ml/ml.h"
#include "../nu/MediaLibraryInterface.h"
#include "resource.h"
#include <archx.h>
#include "resource.h"
#include "../winamp/wa_ipc.h"
#include "../Plugins/General/gen_ml/ml.h"
#include "../Plugins/General/gen_ml/config.h"
#include "api__ml_hotmixradio.h"


#define HOTMIXRADIO_BASE_URL    L"https://hotmixradio.com/?mtm_source=winamp_desktop_player"

extern winampMediaLibraryPlugin plugin;
INT_PTR hotmixradio_pluginMessageProc( int message_type, INT_PTR param1, INT_PTR param2, INT_PTR param3 );
extern int hotmixradio_treeItem;



#endif  // !NULLSOFT_HOTMIXRADIO_MAIN_H