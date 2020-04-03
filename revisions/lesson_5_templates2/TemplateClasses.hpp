
template <typename T1, typename T2>
class SampleClass{
public:
	// class constructors and destructor
	SampleClass();
	SampleClass(T1 TypeOneMember, T2 TypeTwoMember);
	~SampleClass(); // class destructor;
	SampleClass(const SampleClass& rhs); // copy constructor
	
	// class operators
	SampleClass& operator=(const SampleClass& rhs);
	const SampleClass& operator++();
	const SampleClass operator++(int flag);
	const SampleClass& operator--();
	const SampleClass operator--(int flag);
	SampleClass operator+(const SampleClass& rhs);
	SampleClass operator-(const SampleClass& rhs);
	
	
	// other class functions
	T1 GetTypeOneMember() const;
	T2 GetTypeTwoMember() const;
	void SetTypeOneMember(T1 TypeOneVar);
	void SetTypeTwoMember(T2 TypeTwoVar);
	unsigned int GetInstCount() const;
	
private:
	T1* pTypeOneMember;
	T2* pTypeTwoMember;	
	static unsigned int InstCounter;
	
};