// ----------------------------------------------------------------------------
// Generated by InterfaceFactory [Wed May 07 00:57:16 2003]
// 
// File        : waservicefactoryx.cpp
// Class       : waServiceFactory
// class layer : Dispatchable Receiver
// ----------------------------------------------------------------------------
#include <precomp.h>

#include "waservicefactoryx.h"

#ifdef CBCLASS
#undef CBCLASS
#endif

#define CBCLASS waServiceFactoryX
START_DISPATCH;
  CB(WASERVICEFACTORY_GETSERVICETYPE, x_getServiceType);
  CB(WASERVICEFACTORY_GETSERVICENAME, x_getServiceName);
  CB(WASERVICEFACTORY_GETGUID, getGuid);
  case WASERVICEFACTORY_GETINTERFACE:
    switch (nparam) {
      default: cb<CBCLASS>(&CBCLASS::getInterface, retval, params); break;
      case 0: cb<CBCLASS>(&CBCLASS::_RETIRED_getInterface, retval, params); break;
    }
  break;
  CB(WASERVICEFACTORY_SUPPORTNONLOCKINGGETINTERFACE, supportNonLockingGetInterface);
  CB(WASERVICEFACTORY_RELEASEINTERFACE, releaseInterface);
  CB(WASERVICEFACTORY_GETTESTSTRING, getTestString);
  CB(WASERVICEFACTORY_SERVICENOTIFY, serviceNotify);
END_DISPATCH;
#undef CBCLASS
