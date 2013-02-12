/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef streamcorpus_TYPES_H
#define streamcorpus_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>





struct OffsetType {
  enum type {
    LINES = 0,
    BYTES = 1,
    CHARS = 2
  };
};

extern const std::map<int, const char*> _OffsetType_VALUES_TO_NAMES;

struct EntityType {
  enum type {
    PER = 0,
    ORG = 1,
    LOC = 2,
    MALE_PRONOUN = 3,
    FEMALE_PRONOUN = 4,
    TIME = 5,
    DATE = 6,
    MONEY = 7,
    PERCENT = 8,
    MISC = 9
  };
};

extern const std::map<int, const char*> _EntityType_VALUES_TO_NAMES;

struct Versions {
  enum type {
    v0_2_0 = 0
  };
};

extern const std::map<int, const char*> _Versions_VALUES_TO_NAMES;

typedef std::string SourceMetadata;

typedef std::string TaggerID;

typedef struct _StreamTime__isset {
  _StreamTime__isset() : epoch_ticks(false), zulu_timestamp(false) {}
  bool epoch_ticks;
  bool zulu_timestamp;
} _StreamTime__isset;

class StreamTime {
 public:

  static const char* ascii_fingerprint; // = "DD2684E5F49042C4C07B5348ECFFFD06";
  static const uint8_t binary_fingerprint[16]; // = {0xDD,0x26,0x84,0xE5,0xF4,0x90,0x42,0xC4,0xC0,0x7B,0x53,0x48,0xEC,0xFF,0xFD,0x06};

  StreamTime() : epoch_ticks(0), zulu_timestamp() {
  }

  virtual ~StreamTime() throw() {}

  double epoch_ticks;
  std::string zulu_timestamp;

  _StreamTime__isset __isset;

  void __set_epoch_ticks(const double val) {
    epoch_ticks = val;
  }

  void __set_zulu_timestamp(const std::string& val) {
    zulu_timestamp = val;
  }

  bool operator == (const StreamTime & rhs) const
  {
    if (!(epoch_ticks == rhs.epoch_ticks))
      return false;
    if (!(zulu_timestamp == rhs.zulu_timestamp))
      return false;
    return true;
  }
  bool operator != (const StreamTime &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StreamTime & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StreamTime &a, StreamTime &b);

typedef struct _Annotator__isset {
  _Annotator__isset() : annotator_id(false), annotation_time(false), reference_kb(false), kb_snapshot_time(false) {}
  bool annotator_id;
  bool annotation_time;
  bool reference_kb;
  bool kb_snapshot_time;
} _Annotator__isset;

class Annotator {
 public:

  static const char* ascii_fingerprint; // = "CE8AC238634F80029949962E65E1F48C";
  static const uint8_t binary_fingerprint[16]; // = {0xCE,0x8A,0xC2,0x38,0x63,0x4F,0x80,0x02,0x99,0x49,0x96,0x2E,0x65,0xE1,0xF4,0x8C};

  Annotator() : annotator_id(), reference_kb() {
  }

  virtual ~Annotator() throw() {}

  std::string annotator_id;
  StreamTime annotation_time;
  std::string reference_kb;
  StreamTime kb_snapshot_time;

  _Annotator__isset __isset;

  void __set_annotator_id(const std::string& val) {
    annotator_id = val;
  }

  void __set_annotation_time(const StreamTime& val) {
    annotation_time = val;
    __isset.annotation_time = true;
  }

  void __set_reference_kb(const std::string& val) {
    reference_kb = val;
    __isset.reference_kb = true;
  }

  void __set_kb_snapshot_time(const StreamTime& val) {
    kb_snapshot_time = val;
    __isset.kb_snapshot_time = true;
  }

  bool operator == (const Annotator & rhs) const
  {
    if (!(annotator_id == rhs.annotator_id))
      return false;
    if (__isset.annotation_time != rhs.__isset.annotation_time)
      return false;
    else if (__isset.annotation_time && !(annotation_time == rhs.annotation_time))
      return false;
    if (__isset.reference_kb != rhs.__isset.reference_kb)
      return false;
    else if (__isset.reference_kb && !(reference_kb == rhs.reference_kb))
      return false;
    if (__isset.kb_snapshot_time != rhs.__isset.kb_snapshot_time)
      return false;
    else if (__isset.kb_snapshot_time && !(kb_snapshot_time == rhs.kb_snapshot_time))
      return false;
    return true;
  }
  bool operator != (const Annotator &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Annotator & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Annotator &a, Annotator &b);

typedef struct _Offset__isset {
  _Offset__isset() : type(false), first(false), length(false), xpath(false), content_form(true), value(false) {}
  bool type;
  bool first;
  bool length;
  bool xpath;
  bool content_form;
  bool value;
} _Offset__isset;

class Offset {
 public:

  static const char* ascii_fingerprint; // = "A20D4C3BA289AF4627C9FDEC29A1B027";
  static const uint8_t binary_fingerprint[16]; // = {0xA2,0x0D,0x4C,0x3B,0xA2,0x89,0xAF,0x46,0x27,0xC9,0xFD,0xEC,0x29,0xA1,0xB0,0x27};

  Offset() : type((OffsetType::type)0), first(0), length(0), xpath(), content_form("clean_visible"), value() {
  }

  virtual ~Offset() throw() {}

  OffsetType::type type;
  int64_t first;
  int32_t length;
  std::string xpath;
  std::string content_form;
  std::string value;

  _Offset__isset __isset;

  void __set_type(const OffsetType::type val) {
    type = val;
  }

  void __set_first(const int64_t val) {
    first = val;
  }

  void __set_length(const int32_t val) {
    length = val;
  }

  void __set_xpath(const std::string& val) {
    xpath = val;
    __isset.xpath = true;
  }

  void __set_content_form(const std::string& val) {
    content_form = val;
    __isset.content_form = true;
  }

  void __set_value(const std::string& val) {
    value = val;
    __isset.value = true;
  }

  bool operator == (const Offset & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(first == rhs.first))
      return false;
    if (!(length == rhs.length))
      return false;
    if (__isset.xpath != rhs.__isset.xpath)
      return false;
    else if (__isset.xpath && !(xpath == rhs.xpath))
      return false;
    if (__isset.content_form != rhs.__isset.content_form)
      return false;
    else if (__isset.content_form && !(content_form == rhs.content_form))
      return false;
    if (__isset.value != rhs.__isset.value)
      return false;
    else if (__isset.value && !(value == rhs.value))
      return false;
    return true;
  }
  bool operator != (const Offset &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Offset & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Offset &a, Offset &b);

typedef struct _Label__isset {
  _Label__isset() : target_id(false), offsets(true), annotator(false) {}
  bool target_id;
  bool offsets;
  bool annotator;
} _Label__isset;

class Label {
 public:

  static const char* ascii_fingerprint; // = "DF310CE3B6053884BBD366864CB42756";
  static const uint8_t binary_fingerprint[16]; // = {0xDF,0x31,0x0C,0xE3,0xB6,0x05,0x38,0x84,0xBB,0xD3,0x66,0x86,0x4C,0xB4,0x27,0x56};

  Label() : target_id() {

  }

  virtual ~Label() throw() {}

  std::string target_id;
  std::map<OffsetType::type, Offset>  offsets;
  Annotator annotator;

  _Label__isset __isset;

  void __set_target_id(const std::string& val) {
    target_id = val;
  }

  void __set_offsets(const std::map<OffsetType::type, Offset> & val) {
    offsets = val;
    __isset.offsets = true;
  }

  void __set_annotator(const Annotator& val) {
    annotator = val;
    __isset.annotator = true;
  }

  bool operator == (const Label & rhs) const
  {
    if (!(target_id == rhs.target_id))
      return false;
    if (__isset.offsets != rhs.__isset.offsets)
      return false;
    else if (__isset.offsets && !(offsets == rhs.offsets))
      return false;
    if (__isset.annotator != rhs.__isset.annotator)
      return false;
    else if (__isset.annotator && !(annotator == rhs.annotator))
      return false;
    return true;
  }
  bool operator != (const Label &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Label & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Label &a, Label &b);

typedef struct _LabelSet__isset {
  _LabelSet__isset() : annotator(false), labels(true) {}
  bool annotator;
  bool labels;
} _LabelSet__isset;

class LabelSet {
 public:

  static const char* ascii_fingerprint; // = "60E41E569004427F116F1A6D648F6599";
  static const uint8_t binary_fingerprint[16]; // = {0x60,0xE4,0x1E,0x56,0x90,0x04,0x42,0x7F,0x11,0x6F,0x1A,0x6D,0x64,0x8F,0x65,0x99};

  LabelSet() {

  }

  virtual ~LabelSet() throw() {}

  Annotator annotator;
  std::vector<Label>  labels;

  _LabelSet__isset __isset;

  void __set_annotator(const Annotator& val) {
    annotator = val;
  }

  void __set_labels(const std::vector<Label> & val) {
    labels = val;
  }

  bool operator == (const LabelSet & rhs) const
  {
    if (!(annotator == rhs.annotator))
      return false;
    if (!(labels == rhs.labels))
      return false;
    return true;
  }
  bool operator != (const LabelSet &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LabelSet & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(LabelSet &a, LabelSet &b);

typedef struct _Token__isset {
  _Token__isset() : token_num(false), token(false), offsets(true), sentence_pos(true), lemma(false), pos(false), entity_type(false), mention_id(true), equiv_id(true), parent_id(true), dependency_path(false), labels(true) {}
  bool token_num;
  bool token;
  bool offsets;
  bool sentence_pos;
  bool lemma;
  bool pos;
  bool entity_type;
  bool mention_id;
  bool equiv_id;
  bool parent_id;
  bool dependency_path;
  bool labels;
} _Token__isset;

class Token {
 public:

  static const char* ascii_fingerprint; // = "83487AC4BBC8507EC47723871C36A102";
  static const uint8_t binary_fingerprint[16]; // = {0x83,0x48,0x7A,0xC4,0xBB,0xC8,0x50,0x7E,0xC4,0x77,0x23,0x87,0x1C,0x36,0xA1,0x02};

  Token() : token_num(0), token(), sentence_pos(-1), lemma(), pos(), entity_type((EntityType::type)0), mention_id(-1), equiv_id(-1), parent_id(-1), dependency_path() {


  }

  virtual ~Token() throw() {}

  int32_t token_num;
  std::string token;
  std::map<OffsetType::type, Offset>  offsets;
  int32_t sentence_pos;
  std::string lemma;
  std::string pos;
  EntityType::type entity_type;
  int16_t mention_id;
  int32_t equiv_id;
  int32_t parent_id;
  std::string dependency_path;
  std::vector<Label>  labels;

  _Token__isset __isset;

  void __set_token_num(const int32_t val) {
    token_num = val;
  }

  void __set_token(const std::string& val) {
    token = val;
  }

  void __set_offsets(const std::map<OffsetType::type, Offset> & val) {
    offsets = val;
    __isset.offsets = true;
  }

  void __set_sentence_pos(const int32_t val) {
    sentence_pos = val;
    __isset.sentence_pos = true;
  }

  void __set_lemma(const std::string& val) {
    lemma = val;
    __isset.lemma = true;
  }

  void __set_pos(const std::string& val) {
    pos = val;
    __isset.pos = true;
  }

  void __set_entity_type(const EntityType::type val) {
    entity_type = val;
    __isset.entity_type = true;
  }

  void __set_mention_id(const int16_t val) {
    mention_id = val;
    __isset.mention_id = true;
  }

  void __set_equiv_id(const int32_t val) {
    equiv_id = val;
    __isset.equiv_id = true;
  }

  void __set_parent_id(const int32_t val) {
    parent_id = val;
    __isset.parent_id = true;
  }

  void __set_dependency_path(const std::string& val) {
    dependency_path = val;
    __isset.dependency_path = true;
  }

  void __set_labels(const std::vector<Label> & val) {
    labels = val;
    __isset.labels = true;
  }

  bool operator == (const Token & rhs) const
  {
    if (!(token_num == rhs.token_num))
      return false;
    if (!(token == rhs.token))
      return false;
    if (__isset.offsets != rhs.__isset.offsets)
      return false;
    else if (__isset.offsets && !(offsets == rhs.offsets))
      return false;
    if (__isset.sentence_pos != rhs.__isset.sentence_pos)
      return false;
    else if (__isset.sentence_pos && !(sentence_pos == rhs.sentence_pos))
      return false;
    if (__isset.lemma != rhs.__isset.lemma)
      return false;
    else if (__isset.lemma && !(lemma == rhs.lemma))
      return false;
    if (__isset.pos != rhs.__isset.pos)
      return false;
    else if (__isset.pos && !(pos == rhs.pos))
      return false;
    if (__isset.entity_type != rhs.__isset.entity_type)
      return false;
    else if (__isset.entity_type && !(entity_type == rhs.entity_type))
      return false;
    if (__isset.mention_id != rhs.__isset.mention_id)
      return false;
    else if (__isset.mention_id && !(mention_id == rhs.mention_id))
      return false;
    if (__isset.equiv_id != rhs.__isset.equiv_id)
      return false;
    else if (__isset.equiv_id && !(equiv_id == rhs.equiv_id))
      return false;
    if (__isset.parent_id != rhs.__isset.parent_id)
      return false;
    else if (__isset.parent_id && !(parent_id == rhs.parent_id))
      return false;
    if (__isset.dependency_path != rhs.__isset.dependency_path)
      return false;
    else if (__isset.dependency_path && !(dependency_path == rhs.dependency_path))
      return false;
    if (__isset.labels != rhs.__isset.labels)
      return false;
    else if (__isset.labels && !(labels == rhs.labels))
      return false;
    return true;
  }
  bool operator != (const Token &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Token & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Token &a, Token &b);

typedef struct _Sentence__isset {
  _Sentence__isset() : tokens(true), labels(true) {}
  bool tokens;
  bool labels;
} _Sentence__isset;

class Sentence {
 public:

  static const char* ascii_fingerprint; // = "A3B157B62D5B3B57E03EF5FC71EC7759";
  static const uint8_t binary_fingerprint[16]; // = {0xA3,0xB1,0x57,0xB6,0x2D,0x5B,0x3B,0x57,0xE0,0x3E,0xF5,0xFC,0x71,0xEC,0x77,0x59};

  Sentence() {


  }

  virtual ~Sentence() throw() {}

  std::vector<Token>  tokens;
  std::vector<Label>  labels;

  _Sentence__isset __isset;

  void __set_tokens(const std::vector<Token> & val) {
    tokens = val;
  }

  void __set_labels(const std::vector<Label> & val) {
    labels = val;
    __isset.labels = true;
  }

  bool operator == (const Sentence & rhs) const
  {
    if (!(tokens == rhs.tokens))
      return false;
    if (__isset.labels != rhs.__isset.labels)
      return false;
    else if (__isset.labels && !(labels == rhs.labels))
      return false;
    return true;
  }
  bool operator != (const Sentence &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Sentence & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Sentence &a, Sentence &b);

typedef struct _Tagging__isset {
  _Tagging__isset() : tagger_id(false), raw_tagging(false), tagger_config(false), tagger_version(false), generation_time(false) {}
  bool tagger_id;
  bool raw_tagging;
  bool tagger_config;
  bool tagger_version;
  bool generation_time;
} _Tagging__isset;

class Tagging {
 public:

  static const char* ascii_fingerprint; // = "0A0DFB97882FDAD8FD6CF82C36CDF3B0";
  static const uint8_t binary_fingerprint[16]; // = {0x0A,0x0D,0xFB,0x97,0x88,0x2F,0xDA,0xD8,0xFD,0x6C,0xF8,0x2C,0x36,0xCD,0xF3,0xB0};

  Tagging() : tagger_id(), raw_tagging(), tagger_config(), tagger_version() {
  }

  virtual ~Tagging() throw() {}

  std::string tagger_id;
  std::string raw_tagging;
  std::string tagger_config;
  std::string tagger_version;
  StreamTime generation_time;

  _Tagging__isset __isset;

  void __set_tagger_id(const std::string& val) {
    tagger_id = val;
  }

  void __set_raw_tagging(const std::string& val) {
    raw_tagging = val;
  }

  void __set_tagger_config(const std::string& val) {
    tagger_config = val;
    __isset.tagger_config = true;
  }

  void __set_tagger_version(const std::string& val) {
    tagger_version = val;
    __isset.tagger_version = true;
  }

  void __set_generation_time(const StreamTime& val) {
    generation_time = val;
    __isset.generation_time = true;
  }

  bool operator == (const Tagging & rhs) const
  {
    if (!(tagger_id == rhs.tagger_id))
      return false;
    if (!(raw_tagging == rhs.raw_tagging))
      return false;
    if (__isset.tagger_config != rhs.__isset.tagger_config)
      return false;
    else if (__isset.tagger_config && !(tagger_config == rhs.tagger_config))
      return false;
    if (__isset.tagger_version != rhs.__isset.tagger_version)
      return false;
    else if (__isset.tagger_version && !(tagger_version == rhs.tagger_version))
      return false;
    if (__isset.generation_time != rhs.__isset.generation_time)
      return false;
    else if (__isset.generation_time && !(generation_time == rhs.generation_time))
      return false;
    return true;
  }
  bool operator != (const Tagging &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Tagging & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Tagging &a, Tagging &b);

typedef struct _ContentItem__isset {
  _ContentItem__isset() : raw(false), encoding(false), media_type(false), clean_html(false), clean_visible(false), logs(true), taggings(true), labelsets(true), sentences(true), sentence_blobs(true) {}
  bool raw;
  bool encoding;
  bool media_type;
  bool clean_html;
  bool clean_visible;
  bool logs;
  bool taggings;
  bool labelsets;
  bool sentences;
  bool sentence_blobs;
} _ContentItem__isset;

class ContentItem {
 public:

  static const char* ascii_fingerprint; // = "FE1846C5E0F6B1A7278757F54468FB36";
  static const uint8_t binary_fingerprint[16]; // = {0xFE,0x18,0x46,0xC5,0xE0,0xF6,0xB1,0xA7,0x27,0x87,0x57,0xF5,0x44,0x68,0xFB,0x36};

  ContentItem() : raw(), encoding(), media_type(), clean_html(), clean_visible() {





  }

  virtual ~ContentItem() throw() {}

  std::string raw;
  std::string encoding;
  std::string media_type;
  std::string clean_html;
  std::string clean_visible;
  std::vector<std::string>  logs;
  std::map<TaggerID, Tagging>  taggings;
  std::vector<LabelSet>  labelsets;
  std::map<TaggerID, std::vector<Sentence> >  sentences;
  std::map<TaggerID, std::string>  sentence_blobs;

  _ContentItem__isset __isset;

  void __set_raw(const std::string& val) {
    raw = val;
    __isset.raw = true;
  }

  void __set_encoding(const std::string& val) {
    encoding = val;
    __isset.encoding = true;
  }

  void __set_media_type(const std::string& val) {
    media_type = val;
    __isset.media_type = true;
  }

  void __set_clean_html(const std::string& val) {
    clean_html = val;
    __isset.clean_html = true;
  }

  void __set_clean_visible(const std::string& val) {
    clean_visible = val;
    __isset.clean_visible = true;
  }

  void __set_logs(const std::vector<std::string> & val) {
    logs = val;
    __isset.logs = true;
  }

  void __set_taggings(const std::map<TaggerID, Tagging> & val) {
    taggings = val;
    __isset.taggings = true;
  }

  void __set_labelsets(const std::vector<LabelSet> & val) {
    labelsets = val;
    __isset.labelsets = true;
  }

  void __set_sentences(const std::map<TaggerID, std::vector<Sentence> > & val) {
    sentences = val;
    __isset.sentences = true;
  }

  void __set_sentence_blobs(const std::map<TaggerID, std::string> & val) {
    sentence_blobs = val;
    __isset.sentence_blobs = true;
  }

  bool operator == (const ContentItem & rhs) const
  {
    if (__isset.raw != rhs.__isset.raw)
      return false;
    else if (__isset.raw && !(raw == rhs.raw))
      return false;
    if (__isset.encoding != rhs.__isset.encoding)
      return false;
    else if (__isset.encoding && !(encoding == rhs.encoding))
      return false;
    if (__isset.media_type != rhs.__isset.media_type)
      return false;
    else if (__isset.media_type && !(media_type == rhs.media_type))
      return false;
    if (__isset.clean_html != rhs.__isset.clean_html)
      return false;
    else if (__isset.clean_html && !(clean_html == rhs.clean_html))
      return false;
    if (__isset.clean_visible != rhs.__isset.clean_visible)
      return false;
    else if (__isset.clean_visible && !(clean_visible == rhs.clean_visible))
      return false;
    if (__isset.logs != rhs.__isset.logs)
      return false;
    else if (__isset.logs && !(logs == rhs.logs))
      return false;
    if (__isset.taggings != rhs.__isset.taggings)
      return false;
    else if (__isset.taggings && !(taggings == rhs.taggings))
      return false;
    if (__isset.labelsets != rhs.__isset.labelsets)
      return false;
    else if (__isset.labelsets && !(labelsets == rhs.labelsets))
      return false;
    if (__isset.sentences != rhs.__isset.sentences)
      return false;
    else if (__isset.sentences && !(sentences == rhs.sentences))
      return false;
    if (__isset.sentence_blobs != rhs.__isset.sentence_blobs)
      return false;
    else if (__isset.sentence_blobs && !(sentence_blobs == rhs.sentence_blobs))
      return false;
    return true;
  }
  bool operator != (const ContentItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ContentItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(ContentItem &a, ContentItem &b);

typedef struct _Rating__isset {
  _Rating__isset() : annotator(false), target_id(false), relevance(false), mentions(false) {}
  bool annotator;
  bool target_id;
  bool relevance;
  bool mentions;
} _Rating__isset;

class Rating {
 public:

  static const char* ascii_fingerprint; // = "3B1E33B2963E1FB49F984B6D0B0C4B05";
  static const uint8_t binary_fingerprint[16]; // = {0x3B,0x1E,0x33,0xB2,0x96,0x3E,0x1F,0xB4,0x9F,0x98,0x4B,0x6D,0x0B,0x0C,0x4B,0x05};

  Rating() : target_id(), relevance(0), mentions(0) {
  }

  virtual ~Rating() throw() {}

  Annotator annotator;
  std::string target_id;
  int16_t relevance;
  bool mentions;

  _Rating__isset __isset;

  void __set_annotator(const Annotator& val) {
    annotator = val;
  }

  void __set_target_id(const std::string& val) {
    target_id = val;
  }

  void __set_relevance(const int16_t val) {
    relevance = val;
    __isset.relevance = true;
  }

  void __set_mentions(const bool val) {
    mentions = val;
    __isset.mentions = true;
  }

  bool operator == (const Rating & rhs) const
  {
    if (!(annotator == rhs.annotator))
      return false;
    if (!(target_id == rhs.target_id))
      return false;
    if (__isset.relevance != rhs.__isset.relevance)
      return false;
    else if (__isset.relevance && !(relevance == rhs.relevance))
      return false;
    if (__isset.mentions != rhs.__isset.mentions)
      return false;
    else if (__isset.mentions && !(mentions == rhs.mentions))
      return false;
    return true;
  }
  bool operator != (const Rating &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Rating & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Rating &a, Rating &b);

typedef struct _StreamItem__isset {
  _StreamItem__isset() : version(false), doc_id(false), abs_url(false), schost(false), original_url(false), source(false), body(false), source_metadata(true), stream_id(false), stream_time(false), other_content(true), ratings(true) {}
  bool version;
  bool doc_id;
  bool abs_url;
  bool schost;
  bool original_url;
  bool source;
  bool body;
  bool source_metadata;
  bool stream_id;
  bool stream_time;
  bool other_content;
  bool ratings;
} _StreamItem__isset;

class StreamItem {
 public:

  static const char* ascii_fingerprint; // = "A5F62496DCC2C6CCD3EF9D1E25052AD1";
  static const uint8_t binary_fingerprint[16]; // = {0xA5,0xF6,0x24,0x96,0xDC,0xC2,0xC6,0xCC,0xD3,0xEF,0x9D,0x1E,0x25,0x05,0x2A,0xD1};

  StreamItem() : version((Versions::type)0), doc_id(), abs_url(), schost(), original_url(), source(), stream_id() {



  }

  virtual ~StreamItem() throw() {}

  Versions::type version;
  std::string doc_id;
  std::string abs_url;
  std::string schost;
  std::string original_url;
  std::string source;
  ContentItem body;
  std::map<std::string, SourceMetadata>  source_metadata;
  std::string stream_id;
  StreamTime stream_time;
  std::map<std::string, ContentItem>  other_content;
  std::vector<Rating>  ratings;

  _StreamItem__isset __isset;

  void __set_version(const Versions::type val) {
    version = val;
  }

  void __set_doc_id(const std::string& val) {
    doc_id = val;
  }

  void __set_abs_url(const std::string& val) {
    abs_url = val;
    __isset.abs_url = true;
  }

  void __set_schost(const std::string& val) {
    schost = val;
    __isset.schost = true;
  }

  void __set_original_url(const std::string& val) {
    original_url = val;
    __isset.original_url = true;
  }

  void __set_source(const std::string& val) {
    source = val;
    __isset.source = true;
  }

  void __set_body(const ContentItem& val) {
    body = val;
    __isset.body = true;
  }

  void __set_source_metadata(const std::map<std::string, SourceMetadata> & val) {
    source_metadata = val;
    __isset.source_metadata = true;
  }

  void __set_stream_id(const std::string& val) {
    stream_id = val;
  }

  void __set_stream_time(const StreamTime& val) {
    stream_time = val;
  }

  void __set_other_content(const std::map<std::string, ContentItem> & val) {
    other_content = val;
    __isset.other_content = true;
  }

  void __set_ratings(const std::vector<Rating> & val) {
    ratings = val;
    __isset.ratings = true;
  }

  bool operator == (const StreamItem & rhs) const
  {
    if (!(version == rhs.version))
      return false;
    if (!(doc_id == rhs.doc_id))
      return false;
    if (__isset.abs_url != rhs.__isset.abs_url)
      return false;
    else if (__isset.abs_url && !(abs_url == rhs.abs_url))
      return false;
    if (__isset.schost != rhs.__isset.schost)
      return false;
    else if (__isset.schost && !(schost == rhs.schost))
      return false;
    if (__isset.original_url != rhs.__isset.original_url)
      return false;
    else if (__isset.original_url && !(original_url == rhs.original_url))
      return false;
    if (__isset.source != rhs.__isset.source)
      return false;
    else if (__isset.source && !(source == rhs.source))
      return false;
    if (__isset.body != rhs.__isset.body)
      return false;
    else if (__isset.body && !(body == rhs.body))
      return false;
    if (__isset.source_metadata != rhs.__isset.source_metadata)
      return false;
    else if (__isset.source_metadata && !(source_metadata == rhs.source_metadata))
      return false;
    if (!(stream_id == rhs.stream_id))
      return false;
    if (!(stream_time == rhs.stream_time))
      return false;
    if (__isset.other_content != rhs.__isset.other_content)
      return false;
    else if (__isset.other_content && !(other_content == rhs.other_content))
      return false;
    if (__isset.ratings != rhs.__isset.ratings)
      return false;
    else if (__isset.ratings && !(ratings == rhs.ratings))
      return false;
    return true;
  }
  bool operator != (const StreamItem &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StreamItem & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(StreamItem &a, StreamItem &b);



#endif