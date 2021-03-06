/**
 * generated by Scrooge 3.0.7-SNAPSHOT
 */
package streamcorpus

import com.twitter.scrooge.{ThriftException, ThriftStruct, ThriftStructCodec}
import org.apache.thrift.protocol._
import java.nio.ByteBuffer
import scala.collection.mutable
import scala.collection.{Map, Set}

/**
 * This is the primary interface to the corpus data.  It is called
 * StreamItem rather than CorpusItem and has a required StreamTime
 * attribute, because even for a static corpus, each document was
 * captured at a particular time in Earth history and might have been
 * different if captured earlier or later.  All corpora are stream
 * corpora, even if they were not explicitly created as such.
 *
 * stream_id is the unique identifier for documents in the corpus.
 * 
 * This is similar to the StreamItem defined in kba.thrift for TREC
 * KBA 2012, however it removes the 'title' and 'anchor' fields, which
 * can now be represented in other_content.  This means that code that
 * was written to read messages from kba.thrift must be updated.
 */
object StreamItem extends ThriftStructCodec[StreamItem] {
  val Struct = new TStruct("StreamItem")
  val VersionField = new TField("version", TType.I32, 1)
  val DocIdField = new TField("docId", TType.STRING, 2)
  val AbsUrlField = new TField("absUrl", TType.STRING, 3)
  val SchostField = new TField("schost", TType.STRING, 4)
  val OriginalUrlField = new TField("originalUrl", TType.STRING, 5)
  val SourceField = new TField("source", TType.STRING, 6)
  val BodyField = new TField("body", TType.STRUCT, 7)
  val SourceMetadataField = new TField("sourceMetadata", TType.MAP, 8)
  val StreamIdField = new TField("streamId", TType.STRING, 9)
  val StreamTimeField = new TField("streamTime", TType.STRUCT, 10)
  val OtherContentField = new TField("otherContent", TType.MAP, 11)
  val RatingsField = new TField("ratings", TType.MAP, 12)

  /**
   * Checks that all required fields are non-null.
   */
  def validate(_item: StreamItem) {
  }

  def encode(_item: StreamItem, _oproto: TProtocol) { _item.write(_oproto) }
  def decode(_iprot: TProtocol) = Immutable.decode(_iprot)

  def apply(_iprot: TProtocol): StreamItem = decode(_iprot)

  def apply(
    version: Versions,
    docId: String,
    absUrl: Option[ByteBuffer] = None,
    schost: Option[String] = None,
    originalUrl: Option[ByteBuffer] = None,
    source: Option[String] = None,
    body: Option[ContentItem] = None,
    sourceMetadata: Map[String, ByteBuffer] = Map(),
    streamId: String,
    streamTime: StreamTime,
    otherContent: Map[String, ContentItem] = Map(),
    ratings: Map[String, Seq[Rating]] = Map()
  ): StreamItem = new Immutable(
    version,
    docId,
    absUrl,
    schost,
    originalUrl,
    source,
    body,
    sourceMetadata,
    streamId,
    streamTime,
    otherContent,
    ratings
  )

  def unapply(_item: StreamItem): Option[Product12[Versions, String, Option[ByteBuffer], Option[String], Option[ByteBuffer], Option[String], Option[ContentItem], Map[String, ByteBuffer], String, StreamTime, Map[String, ContentItem], Map[String, Seq[Rating]]]] = Some(_item)

  object Immutable extends ThriftStructCodec[StreamItem] {
    def encode(_item: StreamItem, _oproto: TProtocol) { _item.write(_oproto) }
    def decode(_iprot: TProtocol) = {
      var version: Versions = null
      var _got_version = false
      var docId: String = null
      var _got_docId = false
      var absUrl: ByteBuffer = null
      var _got_absUrl = false
      var schost: String = null
      var _got_schost = false
      var originalUrl: ByteBuffer = null
      var _got_originalUrl = false
      var source: String = null
      var _got_source = false
      var body: ContentItem = null
      var _got_body = false
      var sourceMetadata: Map[String, ByteBuffer] = Map()
      var _got_sourceMetadata = false
      var streamId: String = null
      var _got_streamId = false
      var streamTime: StreamTime = null
      var _got_streamTime = false
      var otherContent: Map[String, ContentItem] = Map()
      var _got_otherContent = false
      var ratings: Map[String, Seq[Rating]] = Map()
      var _got_ratings = false
      var _done = false
      _iprot.readStructBegin()
      while (!_done) {
        val _field = _iprot.readFieldBegin()
        if (_field.`type` == TType.STOP) {
          _done = true
        } else {
          _field.id match {
            case 1 => { /* version */
              _field.`type` match {
                case TType.I32 => {
                  version = {
                    streamcorpus.Versions(_iprot.readI32())
                  }
                  _got_version = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 2 => { /* docId */
              _field.`type` match {
                case TType.STRING => {
                  docId = {
                    _iprot.readString()
                  }
                  _got_docId = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 3 => { /* absUrl */
              _field.`type` match {
                case TType.STRING => {
                  absUrl = {
                    _iprot.readBinary()
                  }
                  _got_absUrl = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 4 => { /* schost */
              _field.`type` match {
                case TType.STRING => {
                  schost = {
                    _iprot.readString()
                  }
                  _got_schost = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 5 => { /* originalUrl */
              _field.`type` match {
                case TType.STRING => {
                  originalUrl = {
                    _iprot.readBinary()
                  }
                  _got_originalUrl = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 6 => { /* source */
              _field.`type` match {
                case TType.STRING => {
                  source = {
                    _iprot.readString()
                  }
                  _got_source = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 7 => { /* body */
              _field.`type` match {
                case TType.STRUCT => {
                  body = {
                    streamcorpus.ContentItem.decode(_iprot)
                  }
                  _got_body = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 8 => { /* sourceMetadata */
              _field.`type` match {
                case TType.MAP => {
                  sourceMetadata = {
                    val _map = _iprot.readMapBegin()
                    val _rv = new mutable.HashMap[String, ByteBuffer]
                    var _i = 0
                    while (_i < _map.size) {
                      val _key = {
                        _iprot.readString()
                      }
                      val _value = {
                        _iprot.readBinary()
                      }
                      _rv(_key) = _value
                      _i += 1
                    }
                    _iprot.readMapEnd()
                    _rv
                  }
                  _got_sourceMetadata = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 9 => { /* streamId */
              _field.`type` match {
                case TType.STRING => {
                  streamId = {
                    _iprot.readString()
                  }
                  _got_streamId = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 10 => { /* streamTime */
              _field.`type` match {
                case TType.STRUCT => {
                  streamTime = {
                    streamcorpus.StreamTime.decode(_iprot)
                  }
                  _got_streamTime = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 11 => { /* otherContent */
              _field.`type` match {
                case TType.MAP => {
                  otherContent = {
                    val _map = _iprot.readMapBegin()
                    val _rv = new mutable.HashMap[String, ContentItem]
                    var _i = 0
                    while (_i < _map.size) {
                      val _key = {
                        _iprot.readString()
                      }
                      val _value = {
                        ContentItem.decode(_iprot)
                      }
                      _rv(_key) = _value
                      _i += 1
                    }
                    _iprot.readMapEnd()
                    _rv
                  }
                  _got_otherContent = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case 12 => { /* ratings */
              _field.`type` match {
                case TType.MAP => {
                  ratings = {
                    val _map = _iprot.readMapBegin()
                    val _rv = new mutable.HashMap[String, Seq[Rating]]
                    var _i = 0
                    while (_i < _map.size) {
                      val _key = {
                        _iprot.readString()
                      }
                      val _value = {
                        val _list = _iprot.readListBegin()
                        val _rv = new mutable.ArrayBuffer[Rating](_list.size)
                        var _i = 0
                        while (_i < _list.size) {
                          _rv += {
                            Rating.decode(_iprot)
                          }
                          _i += 1
                        }
                        _iprot.readListEnd()
                        _rv
                      }
                      _rv(_key) = _value
                      _i += 1
                    }
                    _iprot.readMapEnd()
                    _rv
                  }
                  _got_ratings = true
                }
                case _ => TProtocolUtil.skip(_iprot, _field.`type`)
              }
            }
            case _ => TProtocolUtil.skip(_iprot, _field.`type`)
          }
          _iprot.readFieldEnd()
        }
      }
      _iprot.readStructEnd()
      new Immutable(
        version,
        docId,
        if (_got_absUrl) Some(absUrl) else None,
        if (_got_schost) Some(schost) else None,
        if (_got_originalUrl) Some(originalUrl) else None,
        if (_got_source) Some(source) else None,
        if (_got_body) Some(body) else None,
        sourceMetadata,
        streamId,
        streamTime,
        otherContent,
        ratings
      )
    }
  }

  /**
   * The default read-only implementation of StreamItem.  You typically should not need to
   * directly reference this class; instead, use the StreamItem.apply method to construct
   * new instances.
   */
  class Immutable(
    val version: Versions,
    val docId: String,
    val absUrl: Option[ByteBuffer] = None,
    val schost: Option[String] = None,
    val originalUrl: Option[ByteBuffer] = None,
    val source: Option[String] = None,
    val body: Option[ContentItem] = None,
    val sourceMetadata: Map[String, ByteBuffer] = Map(),
    val streamId: String,
    val streamTime: StreamTime,
    val otherContent: Map[String, ContentItem] = Map(),
    val ratings: Map[String, Seq[Rating]] = Map()
  ) extends StreamItem

  /**
   * This Proxy trait allows you to extend the StreamItem trait with additional state or
   * behavior and implement the read-only methods from StreamItem using an underlying
   * instance.
   */
  trait Proxy extends StreamItem {
    protected def _underlying_StreamItem: StreamItem
    def version: Versions = _underlying_StreamItem.version
    def docId: String = _underlying_StreamItem.docId
    def absUrl: Option[ByteBuffer] = _underlying_StreamItem.absUrl
    def schost: Option[String] = _underlying_StreamItem.schost
    def originalUrl: Option[ByteBuffer] = _underlying_StreamItem.originalUrl
    def source: Option[String] = _underlying_StreamItem.source
    def body: Option[ContentItem] = _underlying_StreamItem.body
    def sourceMetadata: Map[String, ByteBuffer] = _underlying_StreamItem.sourceMetadata
    def streamId: String = _underlying_StreamItem.streamId
    def streamTime: StreamTime = _underlying_StreamItem.streamTime
    def otherContent: Map[String, ContentItem] = _underlying_StreamItem.otherContent
    def ratings: Map[String, Seq[Rating]] = _underlying_StreamItem.ratings
  }
}

trait StreamItem extends ThriftStruct
  with Product12[Versions, String, Option[ByteBuffer], Option[String], Option[ByteBuffer], Option[String], Option[ContentItem], Map[String, ByteBuffer], String, StreamTime, Map[String, ContentItem], Map[String, Seq[Rating]]]
  with java.io.Serializable
{
  import StreamItem._

  def version: Versions
  def docId: String
  def absUrl: Option[ByteBuffer]
  def schost: Option[String]
  def originalUrl: Option[ByteBuffer]
  def source: Option[String]
  def body: Option[ContentItem]
  def sourceMetadata: Map[String, ByteBuffer]
  def streamId: String
  def streamTime: StreamTime
  def otherContent: Map[String, ContentItem]
  def ratings: Map[String, Seq[Rating]]

  def _1 = version
  def _2 = docId
  def _3 = absUrl
  def _4 = schost
  def _5 = originalUrl
  def _6 = source
  def _7 = body
  def _8 = sourceMetadata
  def _9 = streamId
  def _10 = streamTime
  def _11 = otherContent
  def _12 = ratings

  override def write(_oprot: TProtocol) {
    StreamItem.validate(this)
    _oprot.writeStructBegin(Struct)
    if (true) {
      val version_item = version
      _oprot.writeFieldBegin(VersionField)
      _oprot.writeI32(version_item.value)
      _oprot.writeFieldEnd()
    }
    if (true) {
      val docId_item = docId
      _oprot.writeFieldBegin(DocIdField)
      _oprot.writeString(docId_item)
      _oprot.writeFieldEnd()
    }
    if (absUrl.isDefined) {
      val absUrl_item = absUrl.get
      _oprot.writeFieldBegin(AbsUrlField)
      _oprot.writeBinary(absUrl_item)
      _oprot.writeFieldEnd()
    }
    if (schost.isDefined) {
      val schost_item = schost.get
      _oprot.writeFieldBegin(SchostField)
      _oprot.writeString(schost_item)
      _oprot.writeFieldEnd()
    }
    if (originalUrl.isDefined) {
      val originalUrl_item = originalUrl.get
      _oprot.writeFieldBegin(OriginalUrlField)
      _oprot.writeBinary(originalUrl_item)
      _oprot.writeFieldEnd()
    }
    if (source.isDefined) {
      val source_item = source.get
      _oprot.writeFieldBegin(SourceField)
      _oprot.writeString(source_item)
      _oprot.writeFieldEnd()
    }
    if (body.isDefined) {
      val body_item = body.get
      _oprot.writeFieldBegin(BodyField)
      body_item.write(_oprot)
      _oprot.writeFieldEnd()
    }
    if (true) {
      val sourceMetadata_item = sourceMetadata
      _oprot.writeFieldBegin(SourceMetadataField)
      _oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, sourceMetadata_item.size))
      sourceMetadata_item.foreach { _pair =>
        val sourceMetadata_item_key = _pair._1
        val sourceMetadata_item_value = _pair._2
        _oprot.writeString(sourceMetadata_item_key)
        _oprot.writeBinary(sourceMetadata_item_value)
      }
      _oprot.writeMapEnd()
      _oprot.writeFieldEnd()
    }
    if (true) {
      val streamId_item = streamId
      _oprot.writeFieldBegin(StreamIdField)
      _oprot.writeString(streamId_item)
      _oprot.writeFieldEnd()
    }
    if (true) {
      val streamTime_item = streamTime
      _oprot.writeFieldBegin(StreamTimeField)
      streamTime_item.write(_oprot)
      _oprot.writeFieldEnd()
    }
    if (true) {
      val otherContent_item = otherContent
      _oprot.writeFieldBegin(OtherContentField)
      _oprot.writeMapBegin(new TMap(TType.STRING, TType.STRUCT, otherContent_item.size))
      otherContent_item.foreach { _pair =>
        val otherContent_item_key = _pair._1
        val otherContent_item_value = _pair._2
        _oprot.writeString(otherContent_item_key)
        otherContent_item_value.write(_oprot)
      }
      _oprot.writeMapEnd()
      _oprot.writeFieldEnd()
    }
    if (true) {
      val ratings_item = ratings
      _oprot.writeFieldBegin(RatingsField)
      _oprot.writeMapBegin(new TMap(TType.STRING, TType.LIST, ratings_item.size))
      ratings_item.foreach { _pair =>
        val ratings_item_key = _pair._1
        val ratings_item_value = _pair._2
        _oprot.writeString(ratings_item_key)
        _oprot.writeListBegin(new TList(TType.STRUCT, ratings_item_value.size))
        ratings_item_value.foreach { ratings_item_value_element =>
          ratings_item_value_element.write(_oprot)
        }
        _oprot.writeListEnd()
      }
      _oprot.writeMapEnd()
      _oprot.writeFieldEnd()
    }
    _oprot.writeFieldStop()
    _oprot.writeStructEnd()
  }

  def copy(
    version: Versions = this.version, 
    docId: String = this.docId, 
    absUrl: Option[ByteBuffer] = this.absUrl, 
    schost: Option[String] = this.schost, 
    originalUrl: Option[ByteBuffer] = this.originalUrl, 
    source: Option[String] = this.source, 
    body: Option[ContentItem] = this.body, 
    sourceMetadata: Map[String, ByteBuffer] = this.sourceMetadata, 
    streamId: String = this.streamId, 
    streamTime: StreamTime = this.streamTime, 
    otherContent: Map[String, ContentItem] = this.otherContent, 
    ratings: Map[String, Seq[Rating]] = this.ratings
  ): StreamItem = new Immutable(
    version, 
    docId, 
    absUrl, 
    schost, 
    originalUrl, 
    source, 
    body, 
    sourceMetadata, 
    streamId, 
    streamTime, 
    otherContent, 
    ratings
  )

  override def canEqual(other: Any): Boolean = other.isInstanceOf[StreamItem]

  override def equals(other: Any): Boolean = runtime.ScalaRunTime._equals(this, other)

  override def hashCode: Int = runtime.ScalaRunTime._hashCode(this)

  override def toString: String = runtime.ScalaRunTime._toString(this)


  override def productArity: Int = 12

  override def productElement(n: Int): Any = n match {
    case 0 => version
    case 1 => docId
    case 2 => absUrl
    case 3 => schost
    case 4 => originalUrl
    case 5 => source
    case 6 => body
    case 7 => sourceMetadata
    case 8 => streamId
    case 9 => streamTime
    case 10 => otherContent
    case 11 => ratings
    case _ => throw new IndexOutOfBoundsException(n.toString)
  }

  override def productPrefix: String = "StreamItem"
}