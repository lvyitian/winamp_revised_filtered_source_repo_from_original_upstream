#include <lib/std.mi>
#include "attribs.m"

Function updateLinkage(int type);

System.onScriptLoaded() {
  initAttribs();
  if (archhade_linkall_attrib.getData() == "1") archhade_linkall_attrib.onDataChanged();
  if (archhade_linkposition_attrib.getData() == "1") archhade_linkposition_attrib.onDataChanged();
  if (archhade_linknone_attrib.getData() == "1") archhade_linknone_attrib.onDataChanged();
}

archhade_linkall_attrib.onDataChanged() {
  if (getData() == "1") updateLinkage(2);
}

archhade_linkposition_attrib.onDataChanged() {
  if (getData() == "1") updateLinkage(1);
}

archhade_linknone_attrib.onDataChanged() {
  if (getData() == "1") updateLinkage(0);
}

updateLinkage(int type) {
  Layout shade = getScriptGroup().getParentLayout();
  Layout normal = shade.getContainer().getLayout("normal");
  if (type == 0) {
    shade.setXmlParam("unlinked", "1");
    shade.setXmlParam("linkwidth", "");
    normal.setXmlParam("linkwidth", "");
  } else if (type == 1) {
    shade.setXmlParam("unlinked", "0");
    shade.setXmlParam("linkwidth", "");
    normal.setXmlParam("linkwidth", "");
  } else if (type == 2) {
    shade.setXmlParam("unlinked", "0");
    shade.setXmlParam("linkwidth", "normal");
    normal.setXmlParam("linkwidth", "shade");
  }
}
