
# معرفی پروژه

این پروژه یک سیستم ساده شبیه‌سازی بانکداری است که با زبان C پیاده‌سازی شده و امکانات پایه‌ای یک دستگاه ATM را در محیط کنسول فراهم می‌کند.
# Project Description 
This project is a simple bank management system implemented in C language that simulates basic ATM functionalities in a console environment.

# امکانات :

ورود امن با رمز کارت (PIN) و محدودیت ۳ بار تلاش

ایجاد حساب بانکی

واریز وجه

برداشت وجه

تغییر رمز کارت

مشاهده ۱۰ تراکنش آخر

خروج امن از برنامه

# Features 
- Secure PIN login (3 attempts limit)

- Create a bank account

- Deposit money

- Withdraw money

- Change account PIN

- View last 10 transactions

- Safe program exit


# ساختار برنامه
استفاده از آرایه برای ذخیره ۱۰ تراکنش آخر

استفاده از شرط‌ها و حلقه‌ها برای کنترل منطق برنامه

تراکنش‌های واریز به صورت عدد مثبت و برداشت به صورت عدد منفی ذخیره می‌شوند

جلوگیری از ثبت تراکنش‌های نامعتبر

# Program Structure
Uses arrays to store the last 10 transactions

Uses loops and conditionals for program control

Deposits are stored as positive values, withdrawals as negative values

Prevents invalid transactions

# نحوه اجرا
برنامه را با کامپایلر C کامپایل کنید (مثلاً dev c++):

برنامه را اجرا کنید:

پس از اجرا، با وارد کردن PIN وارد برنامه شوید و از منوی اصلی استفاده کنید.

# How to Run

Compile the program with a C compiler (like dev c++):

Run the program

After running, enter your PIN to log in and use the main menu.

# سیستم ورود  

رمز پیش‌فرض: 1234

کاربر فقط ۳ بار مجاز به وارد کردن رمز است

پس از ۳ بار ورود اشتباه، برنامه خاتمه می‌یابد

# Login System 

Default PIN: 1234

User has only 3 attempts to enter the correct PIN

Program terminates after 3 failed attempts

# سیستم تراکنش‌ها  


فقط ۱۰ تراکنش آخر ذخیره می‌شود

در صورت بیشتر شدن تعداد تراکنش‌ها

قدیمی‌ترین تراکنش حذف می‌شود

تراکنش جدید جایگزین می‌گردد

# Transactions System 

Only the last 10 transactions are stored

When transactions exceed 10:

The oldest transaction is removed

The new transaction is added

# نکات مهم 

قبل از واریز یا برداشت، حساب باید ایجاد شده باشد

موجودی اولیه نمی‌تواند منفی باشد

برداشت بیش از موجودی مجاز نیست

# Important Notes

Account must be created before deposit or withdrawal

Initial balance cannot be negative

Withdrawal cannot exceed current balance

# نویسنده

محمد علی نصیری

کد دانشجویی:404149076

# Author

Mohammad ali nasiri

Student ID:404149076
