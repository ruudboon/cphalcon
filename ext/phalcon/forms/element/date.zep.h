
extern zend_class_entry *phalcon_forms_element_date_ce;

ZEPHIR_INIT_CLASS(Phalcon_Forms_Element_Date);

PHP_METHOD(Phalcon_Forms_Element_Date, render);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_forms_element_date_render, 0, 0, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_forms_element_date_method_entry) {
	PHP_ME(Phalcon_Forms_Element_Date, render, arginfo_phalcon_forms_element_date_render, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
