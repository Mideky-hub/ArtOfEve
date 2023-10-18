#ifndef TIME_HPP
#define TIME_HPP

#include <string>

enum Days {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

enum Months {
	January,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

struct Time {
	uint64_t hour;
	uint64_t minute;
	uint64_t second;
};

struct Date {
	Days day;
	Months month;
	uint64_t year;
};

__interface ITimeManager {
public:
	virtual Time get_time() noexcept = 0;
	virtual Date get_date() noexcept = 0;
	virtual std::string get_time_string() const noexcept = 0;
	virtual std::string get_date_string() const noexcept = 0;
	virtual std::string get_date_time_string() const noexcept = 0;
	virtual bool isDateValid(Date date) const noexcept = 0;
	virtual bool isTimeValid(Time time) const noexcept = 0;
	virtual bool isDateTimeValid(Date date, Time time) const noexcept = 0;
};

class TimeManager : public ITimeManager {
private:
	Time time;
	Date date;
public:
	virtual Time get_time() noexcept override {
		return time;
	}
	virtual Date get_date() noexcept override {
		return date;
	}
	virtual std::string get_time_string() const noexcept override {
		return std::to_string(time.hour) + ":" + std::to_string(time.minute) + ":" + std::to_string(time.second);
	}
	virtual std::string get_date_string() const noexcept override {
		return std::to_string(date.year) + "/" + std::to_string(date.month) + "/" + std::to_string(date.day);
	}
};


#endif // !TIME_HPP