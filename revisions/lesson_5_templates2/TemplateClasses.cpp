#include <iostream>
#include "TemplateClasses.hpp"



/* initialize class static member */
template <typename T1, typename T2>
unsigned int SampleClass<T1, T2>::InstCounter = 0;



/* ===================================================================================================== */
/* ===================================================================================================== */
/* =========================		 CLASS CONSTRUCTORS AND DESTRUCTOR 			======================== */
/* ===================================================================================================== */

template <typename T1, typename T2>
SampleClass<T1, T2>::SampleClass() {
	std::cout << "Called non-parametrized SampleClass constructor..." << std::endl;	
	pTypeOneMember = new T1;
	pTypeTwoMember = new T2;	
	++InstCounter;
	std::cout << "Completed creation of SampleClass instance. Current count of instances: " <<
	InstCounter << std::endl;
}

template <typename T1, typename T2>
SampleClass<T1, T2>::SampleClass(T1 TypeOneMember, T2 TypeTwoMember) {
	std::cout << "Calles parametrized SampleClass constructor..." << std::endl;
	pTypeOneMember = new T1(TypeOneMember);
	pTypeTwoMember = new T2(TypeTwoMember);
	++InstCounter;
	std::cout << "Completed creation of SampleClass instance. Current count of instances: " <<
	InstCounter << std::endl;
}

template <typename T1, typename T2>
SampleClass<T1, T2>::~SampleClass() {
	std::cout << "Class SampleClass destructor called..." << std::endl;
	delete pTypeOneMember;
	pTypeOneMember = 0;
	delete pTypeTwoMember;
	pTypeTwoMember = 0;
	--InstCounter;
	std::cout << "Completed destruction of SampleClass instance. Current count of instances: " <<
	InstCounter << std::endl;
}

template <typename T1, typename T2>
SampleClass<T1, T2>::SampleClass(const SampleClass& rhs) {
	std::cout << "Class SampleClass copy constructor called" << std::endl;	
	*pTypeOneMember = rhs.GetTypeOneMember();
	*pTypeTwoMember = rhs.GetTypeTwoMember();	
	++InstCounter;
	std::cout << "Completed creation of SampleClass instance. Current count of instances: " <<
	InstCounter << std::endl;
}

/* ===================================================================================================== */
/* ===================================================================================================== */





/* ===================================================================================================== */
/* ===================================================================================================== */
/* =========================		 		CLASS OPERATORS 					======================== */
/* ===================================================================================================== */

template <typename T1, typename T2>
SampleClass<T1, T2>& SampleClass<T1, T2>::operator=(const SampleClass& rhs) {
	std::cout << "Class SampleClass assignment operator called..." << std::endl;
	
	// check if not assigning the object to itself
	if (this == &rhs) {
		std::cout << "Tried to assigne the object to itself...; returning the calling object!" << std::endl;
		return *this;
	}
	*pTypeOneMember = rhs.GetTypeOneMember();
	*pTypeTwoMember = rhs.GetTypeTwoMember();	
	std::cout << "Class SampleClass assignment operator completed successfully. " << std::endl;
	return *this;
}

template <typename T1, typename T2>
const SampleClass<T1, T2>& SampleClass<T1, T2>::operator++() {
	++(*pTypeOneMember);
	++(*pTypeTwoMember);
	return *this;
}

template <typename T1, typename T2>
const SampleClass<T1, T2> SampleClass<T1, T2>::operator++(int flag) {
	SampleClass temp = SampleClass(*this);
	(*pTypeOneMember)++;
	(*pTypeTwoMember)++;
	return temp;
}

template <typename T1, typename T2>
const SampleClass<T1, T2>& SampleClass<T1, T2>::operator--() {
	--(*pTypeOneMember);
	--(*pTypeTwoMember);
	return *this;
}

template <typename T1, typename T2>
const SampleClass<T1, T2> SampleClass<T1, T2>::operator--(int flag) {
	SampleClass temp = SampleClass(*this);
	(*pTypeOneMember)--;
	(*pTypeTwoMember)--;
	return temp;
}

template <typename T1, typename T2>
SampleClass<T1, T2> SampleClass<T1, T2>::operator+(const SampleClass<T1, T2>& rhs) {
	return SampleClass(rhs.GetTypeOneMember() + *pTypeOneMember, rhs.GetTypeTwoMember() + *pTypeTwoMember);
}

template <typename T1, typename T2>
SampleClass<T1, T2> SampleClass<T1, T2>::operator-(const SampleClass<T1, T2>& rhs) {
	return SampleClass(rhs.GetTypeOneMember() - *pTypeOneMember, rhs.GetTypeTwoMember() - *pTypeTwoMember);
}

/* ===================================================================================================== */
/* ===================================================================================================== */





/* ===================================================================================================== */
/* ===================================================================================================== */
/* =========================		 		OTHER CLASS FUNCTIONS 				======================== */
/* ===================================================================================================== */

template <typename T1, typename T2>
T1 SampleClass<T1, T2>::GetTypeOneMember() const {
	return *pTypeOneMember;
}

template <typename T1, typename T2>
T2 SampleClass<T1, T2>::GetTypeTwoMember() const {
	return *pTypeTwoMember;
}

template <typename T1, typename T2>
void SampleClass<T1, T2>::SetTypeOneMember(T1 TypeOneVar) {
	*pTypeOneMember = TypeOneVar;
}

template <typename T1, typename T2>
void SampleClass<T1, T2>::SetTypeTwoMember(T2 TypeTwoVar) {
	*pTypeTwoMember = TypeTwoVar;
}

template <typename T1, typename T2>
unsigned int SampleClass<T1, T2>::GetInstCount() const {
	return InstCounter;
}

/* ===================================================================================================== */
/* ===================================================================================================== */





/* ===================================================================================================== */
/* ===================================================================================================== */
/* ======================		 		EXPLICIT INSTANTIATIONS 					==================== */
/* ===================================================================================================== */

template class SampleClass<int, int>;
template class SampleClass<double, double>;
template class SampleClass<int, double>;
template class SampleClass<double, int>;


/* ===================================================================================================== */
/* ===================================================================================================== */

