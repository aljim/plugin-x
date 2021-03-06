
#include <vector>
#include <string>
#include "PluginProtocol.h"
#include "ProtocolAnalytics.h"
#include "winrtInterface_h.h"
#include <unordered_map>
class PluginMap {

public:
	void addPlugin(std::string name);
  static std::unordered_map<void*, winrtInterface::IProtocol^ > mapIProtocol;
  static std::unordered_map<void*, winrtInterface::IProtocolAnalytics^ > mapIProtocolAnalytics;
private:
  PluginMap(){}
};