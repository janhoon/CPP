//
// Created by Jan-hendrik HOON on 2017/06/03.
//

#include "iMonitorModule.hpp"

iMonitorModule::~iMonitorModule() {

}

iMonitorModule::iMonitorModule() : active(1) {

}

iMonitorModule::iMonitorModule(iMonitorModule const &iMonitorModule1) {

}

iMonitorModule &iMonitorModule::operator=(iMonitorModule const &iMonitorModule1) {
    return *this;
}

bool iMonitorModule::isActive() {
    return active;
}

void iMonitorModule::update() {
    _time.update();
}

void iMonitorModule::setAcitve(bool i) {
    active = i;
}
