//
// Created by Jan-hendrik HOON on 2017/05/30.
//

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(): _hired(0) {

}

OfficeBlock::OfficeBlock(OfficeBlock const &ob) {
    *this = ob;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &ob) {
    OfficeBlock *temp = new OfficeBlock(ob);
    delete temp;
    return *this;
}

OfficeBlock::~OfficeBlock() {

}



void OfficeBlock::setIntern(Intern const &intern) {
    _intern = intern;
    _hired++;
}

void OfficeBlock::setSigner(Bureaucrat const &bur) {
    _signer = bur;
    _hired++;
}

void OfficeBlock::setExecutor(Bureaucrat const &bur) {
    _executer = bur;
    _hired++;
}

void OfficeBlock::doBureaucracy(std::string const &type, std::string const & name) {
    if (checkOffice() == 1) {
        _job = _intern.makeForm(type, name);
    }
    throw OfficeBlock::bureaucracyException();
}

bool OfficeBlock::checkOffice() {
    std::cout << _hired << std::endl;
    if (_hired == 3) {
        return 1;
    }
    return 0;
}

const char *OfficeBlock::bureaucracyException::what() const throw() {

    return "Not enough staff to complete the job";
}
