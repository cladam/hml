// hml_types.hc — Core HML types

pub type Hml {
  HStr(value: string),
  HInt(value: int),
  HFloat(value: float),
  HBool(value: bool),
  HDuration(amount: int, unit: string),
  HDatetime(value: string),
  HNull,
  HArray(items: list<Hml>),
  HElement(name: string, attrs: list<(string, Hml)>, body: list<HmlNode>)
}

pub type HmlNode {
  NProp(key: string, value: Hml),
  NElem(element: Hml),
  NText(content: string),
  NComment(text: string)
}