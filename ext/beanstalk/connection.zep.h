
extern zend_class_entry *beanstalk_connection_ce;

ZEPHIR_INIT_CLASS(Beanstalk_Connection);

PHP_METHOD(Beanstalk_Connection, __construct);
PHP_METHOD(Beanstalk_Connection, isConnected);
PHP_METHOD(Beanstalk_Connection, connect);
PHP_METHOD(Beanstalk_Connection, getHost);
PHP_METHOD(Beanstalk_Connection, getPort);
PHP_METHOD(Beanstalk_Connection, getConnectTimeout);
PHP_METHOD(Beanstalk_Connection, isPersistent);
static zend_object_value zephir_init_properties_Beanstalk_Connection(zend_class_entry *class_type TSRMLS_DC);

ZEND_BEGIN_ARG_INFO_EX(arginfo_beanstalk_connection___construct, 0, 0, 0)
	ZEND_ARG_ARRAY_INFO(0, options, 1)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(beanstalk_connection_method_entry) {
	PHP_ME(Beanstalk_Connection, __construct, arginfo_beanstalk_connection___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Beanstalk_Connection, isConnected, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanstalk_Connection, connect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanstalk_Connection, getHost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanstalk_Connection, getPort, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanstalk_Connection, getConnectTimeout, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Beanstalk_Connection, isPersistent, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
