/* This file was generated by Maki Compiler, do not edit manually */

#ifndef __HOOK_TABSHEET_H
#define __HOOK_TABSHEET_H

#include "h_guiobject.h"

#define H_TABSHEET_PARENT H_GuiObject

class H_TabSheet : public H_TABSHEET_PARENT {

public:

  H_TabSheet(ScriptObject *o);
  H_TabSheet();
  virtual ~H_TabSheet();
  virtual void H_hook(ScriptObject *o);
  ScriptObject *getHookedObject();

  virtual int eventCallback(ScriptObject *object, int dlfid, scriptVar **params, int nparams);

  private:

  ScriptObject *obj;
  int inited;
  static int loaded;
};

#endif