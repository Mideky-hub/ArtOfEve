#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <thread>
#include <mutex>

#define INITIALIZATION_TIME_MTHREAD 100

template <typename T>
__interface ISingleton {
public:
	virtual void setValue(const T value) = 0;
	virtual T getValue() const = 0;
};

template <typename T>
class Singleton : ISingleton<T> {
private:
	static Singleton* pinstance_;
	static std::mutex mutex_;
protected:
	Singleton(const T value) : value_(value) {}
	~Singleton() {}
	T value_;
public:
	Singleton(Singleton& other) = delete;
	void operator=(const Singleton&) = delete;
	
	static Singleton* GetInstance(const T value) {
		std::lock_guard<std::mutex> lock(mutex_);
		if (pinstance_ == nullptr)
		{
			pinstance_ = new Singleton(value);
		}
		return pinstance_;
	}
	
	T value() const {
		return value_;
	}
};

#endif //	!SINGLETON_HPP