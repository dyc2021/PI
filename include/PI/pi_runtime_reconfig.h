#ifndef PI_RUNTIME_RECONFIG_H_
#define PI_RUNTIME_RECONFIG_H_

#include <PI/pi_base.h>

#ifdef __cplusplus
extern "C" {
#endif

pi_status_t pi_runtime_reconfig_init_p4objects_new(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt, 
                                                   const char* p4objects_new_json,
                                                   char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_insert_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_change_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             const char* edge_name,
                                             const char* table_name_next,
                                             char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_delete_table(pi_session_handle_t session_handle,
                                             pi_dev_tgt_t dev_tgt,
                                             const char* pipeline_name,
                                             const char* table_name,
                                             char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_insert_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_change_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   bool true_or_false_next,
                                                   const char* node_name,
                                                   char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_delete_conditional(pi_session_handle_t session_handle,
                                                   pi_dev_tgt_t dev_tgt,
                                                   const char* pipeline_name,
                                                   const char* branch_name,
                                                   char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_insert_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* node_name,
                                            const char* true_next_node,
                                            const char* false_next_node,
                                            char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_change_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            bool true_or_false_next,
                                            const char* node_next,
                                            char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_delete_flex(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* flx_name,
                                            char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_insert_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t register_array_size,
                                                      const uint32_t register_array_bitwidth,
                                                      char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_change_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      const uint32_t change_type,
                                                      const uint32_t new_value,
                                                      char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_delete_register_array(pi_session_handle_t session_handle,
                                                      pi_dev_tgt_t dev_tgt,
                                                      const char* register_array_name,
                                                      char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_trigger(pi_session_handle_t session_handle,
                                        pi_dev_tgt_t dev_tgt,
                                        bool on_or_off,
                                        char* p4objects_json_buffer);

pi_status_t pi_runtime_reconfig_change_init(pi_session_handle_t session_handle,
                                            pi_dev_tgt_t dev_tgt,
                                            const char* pipeline_name,
                                            const char* table_name_next,
                                            char* p4objects_json_buffer);

#ifdef __cplusplus
}
#endif

#endif