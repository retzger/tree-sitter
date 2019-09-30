#include "tree_sitter/api.h"

void ts_query_cursor__set_point_range(
  TSQueryCursor *self,
  const TSPoint *start,
  const TSPoint *end
) {
  ts_query_cursor_set_point_range(self, *start, *end);
}

TSNode ts_node__descendant_for_point_range(
  const TSNode *self,
  const TSPoint *start,
  const TSPoint *end
) {
  return ts_node_descendant_for_point_range(self, *start, *end);
}

TSNode ts_node__named_descendant_for_point_range(
  const TSNode *self,
  const TSPoint *start,
  const TSPoint *end
) {
  return ts_node_named_descendant_for_point_range(self, *start, *end);
}

#if defined(TREE_SITTER_TEST)

void ts_record_free(void *);

void rust_tree_sitter_free(void *p) {
  ts_record_free(p);
}

#else

void free(void *);

void rust_tree_sitter_free(void *p) {
  free(p);
}

#endif
