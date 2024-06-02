#pragma once

#ifndef _CLIENT_TIME_HXX_
#define _CLIENT_TIME_HXX_


namespace sfc {
	class ClientTime {

		private: double deltaTime;
		private: double totalTime;


		public: ClientTime();

		public: double GetDeltaTime();
		public: double GetTotalTime();
		
		public: void Update(double _deltaTime, double _totalTime);

	};
}


#endif