
extern zend_class_entry *beanspeak_beanspeak_ce;

ZEPHIR_INIT_CLASS(Beanspeak_Beanspeak);

PHP_METHOD(Beanspeak_Beanspeak, __construct);
PHP_METHOD(Beanspeak_Beanspeak, setDispatcher);
PHP_METHOD(Beanspeak_Beanspeak, getDispatcher);
PHP_METHOD(Beanspeak_Beanspeak, put);
PHP_METHOD(Beanspeak_Beanspeak, use);
PHP_METHOD(Beanspeak_Beanspeak, reserve);

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanspeak_beanspeak___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO(0, dispatcher, Beanspeak\\Dispatcher\\DispatcherInterface, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanspeak_beanspeak_setdispatcher, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, dispatcher, Beanspeak\\Dispatcher\\DispatcherInterface, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanspeak_beanspeak_put, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanspeak_beanspeak_use, 0, 0, 1)
	ZEND_ARG_INFO(0, tube)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanspeak_beanspeak_reserve, 0, 0, 0)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(beanspeak_beanspeak_method_entry) {
	PHP_ME(Beanspeak_Beanspeak, __construct, arginfo_beanspeak_beanspeak___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Beanspeak_Beanspeak, setDispatcher, arginfo_beanspeak_beanspeak_setdispatcher, ZEND_ACC_PUBLIC)
	PHP_ME(Beanspeak_Beanspeak, getDispatcher, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanspeak_Beanspeak, put, arginfo_beanspeak_beanspeak_put, ZEND_ACC_PUBLIC)
	PHP_ME(Beanspeak_Beanspeak, use, arginfo_beanspeak_beanspeak_use, ZEND_ACC_PUBLIC)
	PHP_ME(Beanspeak_Beanspeak, reserve, arginfo_beanspeak_beanspeak_reserve, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
