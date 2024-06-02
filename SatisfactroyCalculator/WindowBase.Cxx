#include "WindowBase.Hxx"

using namespace sfc;

//=================================================================================================| Getters

const string* Client::WindowBase::GetWindowTitle() {
	return this->windowTitle;
}

const Vector2u* Client::WindowBase::GetWindowSize() {
	return this->windowSize;
}

const double* Client::WindowBase::GetWindowMult() {
	return this->windowMult;
}

const unsigned* Client::WindowBase::GetTargetFPS() {
	return this->targetFPS;
}

const RenderWindow* Client::WindowBase::GetWindow() {
	return this->window;
}

const ClientTime* Client::WindowBase::GetClientTime() {
	return this->clientTime;
}

