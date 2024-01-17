#ifndef RUNNABLE_HPP
#define RUNNABLE_HPP

#include "build_options.hpp"
#include "global_definitions.hpp"


extern void usir_init();
extern void usir_cyclicRunMain(void);

void reaction(US_data_t * US_data);

#endif /* RUNNABLE_HPP */
