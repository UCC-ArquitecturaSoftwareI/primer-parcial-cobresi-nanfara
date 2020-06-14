
#include "Manager.h"
#include <utility>

Manager::Manager(std::string name) : m_name(std::move(name)) {

}

Manager::~Manager() = default;

void Manager::Menu(SingletonGame *singleton) {

}

void Manager::Game(SingletonGame *singleton) {

}

void Manager::End(SingletonGame *singleton) {

}

void Manager::Update(SingletonGame *singleton) {

}
