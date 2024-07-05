/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (https://www.swig.org).
 * Version 4.2.1
 *
 * Do not make changes to this file unless you know what you are doing - modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_libUT_RAS_WRAP_H_
#define SWIG_libUT_RAS_WRAP_H_

#include <map>
#include <string>


class SwigDirector_DutUnifiedBase : public DutUnifiedBase, public Swig::Director {

public:
    SwigDirector_DutUnifiedBase(PyObject *self);
    SwigDirector_DutUnifiedBase(PyObject *self,int argc,char **argv);
    SwigDirector_DutUnifiedBase(PyObject *self,char *filename);
    SwigDirector_DutUnifiedBase(PyObject *self,char *filename,int argc,char **argv);
    virtual ~SwigDirector_DutUnifiedBase();
    virtual int step();
    virtual int step(uint64_t cycle,bool dump);
    virtual int finalize();
    virtual void set_waveform(char const *filename);
    virtual void set_coverage(char const *filename);

/* Internal director utilities */
public:
    bool swig_get_inner(const char *swig_protected_method_name) const {
      std::map<std::string, bool>::const_iterator iv = swig_inner.find(swig_protected_method_name);
      return (iv != swig_inner.end() ? iv->second : false);
    }
    void swig_set_inner(const char *swig_protected_method_name, bool swig_val) const {
      swig_inner[swig_protected_method_name] = swig_val;
    }
private:
    mutable std::map<std::string, bool> swig_inner;

#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (!method) {
          std::string msg = "Method in class DutUnifiedBase doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      }
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[5];
#endif

};


#endif