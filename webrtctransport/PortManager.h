#pragma once

#include <unordered_map>
#include <vector>
#include <mutex>

class PortManager
{
public:
	static PortManager* GetInstance();
	~PortManager();
	int16_t GetPort();
	void DelPort(int16_t nPort);
private:
	PortManager();
	std::unordered_map<int16_t, bool> m_mapPorts;
	std::vector<bool> m_vecPorts;
	std::mutex m_mutex;
	int m_nIndex = 0;
};

