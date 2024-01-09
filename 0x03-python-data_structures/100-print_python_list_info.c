#include <python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = PyList_size(p);
	int indx;
	PyList *obj = (PyListObject *)p;

	printf("[*] Size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (indx = 0; indx < size; i++)
		printf("Element %i: %s\n", i, PY_TYPE (obj->ob_item[indx])->tp_name);
}
