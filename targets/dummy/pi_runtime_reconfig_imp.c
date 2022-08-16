#include "PI/target/pi_runtime_reconfig_imp.h"
#include "PI/pi.h"

#include <stdio.h>

#include "func_counter.h"

pi_status_t _pi_runtime_reconfig_init_p4objects_new(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt, 
                                                   const char* p4objects_new_json) {
    (void)session_handle;
    (void)dev_tgt;
    (void)p4objects_new_json;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_insert_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)table_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_change_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             const char* edge_name,
                                             const char* table_name_next) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)table_name;
    (void)edge_name;
    (void)table_name_next;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_delete_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)table_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_insert_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)branch_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_change_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   bool true_or_false_next,
                                                   const char* node_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)branch_name;
    (void)true_or_false_next;
    (void)node_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_delete_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)branch_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_insert_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* node_name,
                                            const char* true_next_node,
                                            const char* false_next_node) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)node_name;
    (void)true_next_node;
    (void)false_next_node;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_change_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            bool true_or_false_next,
                                            const char* node_next) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)flx_name;
    (void)true_or_false_next;
    (void)node_next;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_delete_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)flx_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_insert_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t register_array_size,
                                                      const uint32_t register_array_bitwidth) {
    (void)session_handle;
    (void)dev_tgt;
    (void)register_array_name;
    (void)register_array_size;
    (void)register_array_bitwidth;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_change_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t change_type,
                                                      const uint32_t new_value) {
    (void)session_handle;
    (void)dev_tgt;
    (void)register_array_name;
    (void)change_type;
    (void)new_value;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_delete_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name) {
    (void)session_handle;
    (void)dev_tgt;
    (void)register_array_name;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_trigger(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        bool on_or_off) {
    (void)session_handle;
    (void)dev_tgt;
    (void)on_or_off;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_change_init(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* table_name_next) {
    (void)session_handle;
    (void)dev_tgt;
    (void)pipeline_name;
    (void)table_name_next;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}

pi_status_t _pi_runtime_reconfig_read_json(pi_session_handle_t session_handle,
                                           pi_dev_tgt_t dev_tgt,
                                           char* p4objects_json) {
    (void)session_handle;
    (void)dev_tgt;
    (void)p4objects_json;
    func_counter_increment(__func__);
    return PI_STATUS_SUCCESS;
}