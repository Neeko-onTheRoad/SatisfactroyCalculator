#pragma once

#ifndef _WINDOW_BASE_HXX_
#define _WINDOW_BASE_HXX_

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

#include "ClientTime.Hxx"

using namespace sf;
using namespace std;

namespace sfc {
	namespace Client {
		
		class WindowBase {

//=================================================================================================| Status, Flags

			private: string*       windowTitle;
			private: Vector2u*     windowSize;
			private: double*       windowMult;
			private: unsigned*     targetFPS;
				 
			private: RenderWindow* window;
			private: ClientTime*   clientTime;

//=================================================================================================| Getters

			public: const string*   GetWindowTitle();
			public: const Vector2u* GetWindowSize();
			public: const double*   GetWindowMult();
			public: const unsigned* GetTargetFPS();

			public: const RenderWindow* GetWindow();
			public: const ClientTime*   GetClientTime();

//=================================================================================================| Constructors

			public: WindowBase();

//=================================================================================================| Private Methods

			private: void CreateNewWindow(VideoMode _videoMode, string _windowTitle, Uint32 _style);
		
//=================================================================================================| Methods

			public: void ChangeScene();
			public: void Initialize();
			public: void Run();

		};
	}
}


#endif