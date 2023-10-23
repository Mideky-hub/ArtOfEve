#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <directx/dxcore.h>

#include <windows.foundation.h>
#include <wrl/wrappers/corewrappers.h>
#include <wrl/client.h>
#include <wrl.h>

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include <string>

#include "Singleton.hpp"

using namespace ABI::Windows::Foundation;
using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

__interface IApplication {
public:
	virtual void Initialize() = 0;
	virtual void Run() = 0;
	virtual void Shutdown() = 0;
};

class Application : public IApplication {
private:
	
};

#endif	//	!APPLICATION_HPP