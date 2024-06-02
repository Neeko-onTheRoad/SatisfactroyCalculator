#include "ClientTime.Hxx"

using namespace sfc;
using namespace std;

sfc::ClientTime::ClientTime() {
	this->deltaTime = 0.f;
	this->totalTime = 0.f;
}

double ClientTime::GetDeltaTime() {
	return this->deltaTime;
}

double ClientTime::GetTotalTime() {
	return this->totalTime;
}

void ClientTime::Update(double _deltaTime, double _totalTime) {
	this->deltaTime = _deltaTime;
	this->totalTime = _totalTime;
}